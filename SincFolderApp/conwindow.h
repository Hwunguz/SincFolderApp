#ifndef CONWINDOW_H
#define CONWINDOW_H

#include <QWidget>
#include "user.h"

namespace Ui {
class ConWindow;
}

class ConWindow : public QWidget
{
    Q_OBJECT
    void setIp();
public:
    explicit ConWindow(QWidget *parent = nullptr);
    ~ConWindow();

public slots:
    void showUsReqv(User* us);
signals:
    void newUs(User*);
    void deleteUs(User*);

private slots:
    void on_Disable_clicked();

    void on_Accept_clicked();

private:
    Ui::ConWindow *ui;
    User* _us;
};

#endif // CONWINDOW_H
