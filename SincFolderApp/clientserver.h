#ifndef CLIENTSERVER_H
#define CLIENTSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QFileSystemWatcher>

#include "user.h"

class ClientServer : public QObject
{
    Q_OBJECT
public:
    explicit ClientServer(int port, QObject *parent = nullptr);
    void sendToEveryone(QByteArray data);
    QStringList getUserIp();

public slots:

    void recvBroadcastForCon();
    void sincFile(const QString filepath);
    void loadFile(QString filePath, QByteArray data);
    void connectUs(User* us);
    void disconnUs(User* us);
    void newConnection();

signals:

    void reqvConnectUs(User*);

private:
    void start();
    QStringList loadUsIp(QString json);

    QString _rootFolder;
    QString _jsonPath;

    int _port;
    User* _us;
    QTcpServer* _sr;
    QList<User*> _users;
    QFileSystemWatcher _watcher;
};
#endif // CLIENTSERVER_H
