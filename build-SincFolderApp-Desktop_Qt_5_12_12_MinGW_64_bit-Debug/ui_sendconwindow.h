/********************************************************************************
** Form generated from reading UI file 'sendconwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCONWINDOW_H
#define UI_SENDCONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendConWindow
{
public:

    void setupUi(QWidget *SendConWindow)
    {
        if (SendConWindow->objectName().isEmpty())
            SendConWindow->setObjectName(QString::fromUtf8("SendConWindow"));
        SendConWindow->resize(400, 300);

        retranslateUi(SendConWindow);

        QMetaObject::connectSlotsByName(SendConWindow);
    } // setupUi

    void retranslateUi(QWidget *SendConWindow)
    {
        SendConWindow->setWindowTitle(QApplication::translate("SendConWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendConWindow: public Ui_SendConWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCONWINDOW_H
