#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <clientserver.h>
#include <conwindow.h>
#include <QFileSystemWatcher>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_action_triggered();

private:

    ClientServer* _sr;
    ConWindow* _conWindow;
    QFileSystemWatcher _watcher;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
