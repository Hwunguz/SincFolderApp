#include "user.h"
#include <QDataStream>

User::User(QTcpSocket* sk, QObject *parent)
    : QObject(parent)
    , _sk(sk)
{
    QObject::connect(_sk, SIGNAL(readyRead()), this, SLOT(read()));
}

User::User(QString ip, int port, QObject *parent): ip(ip)
{

    _sk = new QTcpSocket();
    _sk->connectToHost(ip, port);
    QObject::connect(_sk, SIGNAL(readyRead()), this, SLOT(read()));
}

void User::send(QByteArray& data)
{
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out << quint16(0) << data;
    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));
    if(!(_sk->write(arrBlock))){
        qDebug() << getIp() + ":no data written to the socket";
    }
}

quint16 User::bytesAvailable()
{
    return _sk->bytesAvailable();
}

void User::read()
{
    _mess.clear();
    QTcpSocket* user = (QTcpSocket*)sender();
    QDataStream in(user);
    in.setVersion(QDataStream::Qt_5_12);
    while(true){
        if(!_blocksize){
            if(user->bytesAvailable() < quint16()){
                break;
            }
            in >> _blocksize;
        }
        if(_blocksize > user->bytesAvailable()){
            break;
        }
        QByteArray m;
        in << m;
        _mess += m;
    }

    if(_mess.toStdString() == "Request connect"){
        emit reqvConnectUs(this);
    }
    else if(_mess.toStdString() == "Accept connect"){
        emit connectUs(this);
    }
    else if(_mess.toStdString() == "disconnect"){
        emit disconnetUs(this);
    }
    else if(_mess.toStdString().substr(0, 10) == "File path"){
        _fileName = _mess.toStdString().substr(10).data();
    }
    else{
        emit loadFile(_fileName, _mess);
    }

}
