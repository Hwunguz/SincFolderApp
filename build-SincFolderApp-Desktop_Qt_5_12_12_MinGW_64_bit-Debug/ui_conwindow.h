/********************************************************************************
** Form generated from reading UI file 'conwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONWINDOW_H
#define UI_CONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConWindow
{
public:
    QLabel *label;
    QPushButton *Accept;
    QPushButton *Disable;
    QLabel *UsIp;

    void setupUi(QWidget *ConWindow)
    {
        if (ConWindow->objectName().isEmpty())
            ConWindow->setObjectName(QString::fromUtf8("ConWindow"));
        ConWindow->resize(400, 91);
        label = new QLabel(ConWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 131, 16));
        Accept = new QPushButton(ConWindow);
        Accept->setObjectName(QString::fromUtf8("Accept"));
        Accept->setGeometry(QRect(10, 40, 93, 28));
        Disable = new QPushButton(ConWindow);
        Disable->setObjectName(QString::fromUtf8("Disable"));
        Disable->setGeometry(QRect(290, 40, 93, 28));
        UsIp = new QLabel(ConWindow);
        UsIp->setObjectName(QString::fromUtf8("UsIp"));
        UsIp->setGeometry(QRect(130, 40, 101, 16));

        retranslateUi(ConWindow);

        QMetaObject::connectSlotsByName(ConWindow);
    } // setupUi

    void retranslateUi(QWidget *ConWindow)
    {
        ConWindow->setWindowTitle(QApplication::translate("ConWindow", "Form", nullptr));
        label->setText(QApplication::translate("ConWindow", "Reuests for connection", nullptr));
        Accept->setText(QApplication::translate("ConWindow", "Accept", nullptr));
        Disable->setText(QApplication::translate("ConWindow", "Disable", nullptr));
        UsIp->setText(QApplication::translate("ConWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConWindow: public Ui_ConWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONWINDOW_H
