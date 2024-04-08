/********************************************************************************
** Form generated from reading UI file 'listuserwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTUSERWIN_H
#define UI_LISTUSERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListUserWin
{
public:

    void setupUi(QWidget *ListUserWin)
    {
        if (ListUserWin->objectName().isEmpty())
            ListUserWin->setObjectName(QString::fromUtf8("ListUserWin"));
        ListUserWin->resize(400, 300);

        retranslateUi(ListUserWin);

        QMetaObject::connectSlotsByName(ListUserWin);
    } // setupUi

    void retranslateUi(QWidget *ListUserWin)
    {
        ListUserWin->setWindowTitle(QApplication::translate("ListUserWin", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListUserWin: public Ui_ListUserWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTUSERWIN_H
