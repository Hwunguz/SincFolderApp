#ifndef USER_H
#define USER_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>

class User : public QObject
{
    Q_OBJECT
public:
    explicit User(QTcpSocket* sk, QObject *parent = nullptr);
    User(QString ip,int port, QObject *parent = nullptr);
    void send(QByteArray& data);
    quint16 bytesAvailable();
    QString getIp(){return ip;}

public slots:
    void read();

signals:
    void reqvConnectUs(User* us);
    void connectUs(User* us);
    void disconnetUs(User* us);
    void loadFile(QString fileName, QByteArray data);

private:
    QString ip;
    QString _fileName;
    QByteArray _mess;
    quint16 _blocksize;
    QTcpSocket* _sk;

};

#endif // USER_H
