#include "clientserver.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QFile>
#include <QHostAddress>

ClientServer::ClientServer(int port, QObject *parent) :
    QObject(parent),
    _port(port)
{
    _jsonPath = ":/config/server.json";
    _us = new User("255.255.255.255", _port);
    start();
}

void ClientServer::sendToEveryone(QByteArray data){
    for(auto i : _users){
        i->send(data);
    }
}

QStringList ClientServer::getUserIp()
{
    QStringList list;
    for(auto i : _users){
        list.append(i->getIp());
    }
    return list;
}

void ClientServer::recvBroadcastForCon()
{
    delete _us;
    _us = new User("255.255.255.255", _port);
    QByteArray mess = "Request connect";
    _us->send(mess);
}

void ClientServer::sincFile(const QString filepath)
{
    QFile file(filepath);
    sendToEveryone(file.readAll());
}

void ClientServer::loadFile(QString filePath, QByteArray data)
{
    QFile file(_rootFolder + filePath);
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    file.write(data);
}

void ClientServer::connectUs(User *us)
{
    QJsonParseError doqerror;
    QFile file(_jsonPath);
    if(file.open(QIODevice::ReadOnly)){
        QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll(), &doqerror);
        if(doqerror.errorString().toInt() == QJsonParseError::NoError){
            QJsonObject obj = jdoc.object();

            QJsonArray usIp = obj["UserIp"].toArray();
            usIp.append(us->getIp());
            jdoc.setArray(usIp);

            file.open(QIODevice::Truncate | QIODevice::WriteOnly |QIODevice::Text);
            file.write(jdoc.toJson());
            file.close();
        }else{
            qDebug() << doqerror.errorString();
        }
    }else{
        qDebug() << _jsonPath + " :file not open";
    }
}

void ClientServer::disconnUs(User* user)
{
    int it = _users.indexOf(user);
    delete user;
    user = nullptr;
    _users.removeAt(it);
}

void ClientServer::newConnection()
{
    _users.append(new User(_sr->nextPendingConnection()));
    emit reqvConnectUs(_users.back());
}

void ClientServer::start()
{
    for(auto ip : loadUsIp(_jsonPath)){
        User* us = new User(ip, _port);
        connect(us, SIGNAL(connectUs(User*)), SLOT(connectUs(User*)));
        connect(us, SIGNAL(reqvConnectUs(User*)), SIGNAL(reqvConnectUs(User*)));
        connect(us, SIGNAL(loadFile(QString, QByteArray)), SLOT(loadFile(QString, QByteArray)));
        connect(us, SIGNAL(disconnetUs(User*)), SLOT(disconnUs(User*)));
    }

    _sr = new QTcpServer();
    connect(_sr, SIGNAL(newConnection()), SLOT(newConnection()));

    if(!_sr->listen(QHostAddress::Any, _port)){
        qDebug() << "Error Server:" << _sr->errorString();
    }

}

QStringList ClientServer::loadUsIp(QString path)
{
    QFile file(path);
    if(file.open(QIODevice::ReadOnly)){
        QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll());
        file.close();
        QJsonObject obj = jdoc.object();
        QJsonArray usIp = obj["UserIp"].toArray();
        QStringList strlist;
        for(auto i : usIp.toVariantList()){
            strlist.append(i.toString());
            _users.append(new User(i.toString(), _port));
        }
        return strlist;
    }else{
        qDebug() << path + " :Json file not open";
        return QStringList();
    }
}
