#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileSystemWatcher>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    _conWindow = new ConWindow();
    ui->setupUi(this);

    _sr = new ClientServer(1234);
    connect(_sr, SIGNAL(reqvConnectUs(User*)), _conWindow, SLOT(showUsReqv(User*)));
    connect(_conWindow, SIGNAL(newUs(User*)), _sr, SLOT(connectUs(User*)));

    _watcher.addPath("C:\\Users\\Asus rog\\Documents\\vault");
    connect(&_watcher, SIGNAL(directoryChanged(const QString)), _sr, SLOT(sincFile(const QString)));

    ui->listWidget->addItems(_sr->getUserIp());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    _sr->recvBroadcastForCon();
}
