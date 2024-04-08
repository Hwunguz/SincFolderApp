#ifndef SYSTEMWATCHER_H
#define SYSTEMWATCHER_H

#include <QFileSystemWatcher>

class systemWatcher : public QFileSystemWatcher
{
    Q_OBJECT

public slots:

public:
    systemWatcher(QStringList paths, QObject* parent = nullptr);
};

#endif // SYSTEMWATCHER_H
