#include "conwindow.h"
#include "ui_conwindow.h"

ConWindow::ConWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConWindow)
{
    ui->setupUi(this);
}

ConWindow::~ConWindow()
{
    delete ui;
}

void ConWindow::showUsReqv(User* us)
{
    _us = us;
    ui->UsIp->setText(us->getIp());
    show();
}

void ConWindow::on_Disable_clicked()
{
    emit deleteUs(_us);
    close();
}


void ConWindow::on_Accept_clicked()
{
    emit newUs(_us);
    close();
}

