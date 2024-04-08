#include "systemwatcher.h"

systemWatcher::systemWatcher(QStringList paths, QObject* parent)
    : QFileSystemWatcher(paths, parent )
{

}
