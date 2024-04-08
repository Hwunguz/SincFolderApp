#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include "user.h"

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

public:
    void SincFile(const QString filepath, const QByteArray& data);


signals:
    QList<User*> _users;
    void newUser(QString usIp);
    void newConnection();
    void recvConnection(QString usIp);
};

#endif // SERVER_H
