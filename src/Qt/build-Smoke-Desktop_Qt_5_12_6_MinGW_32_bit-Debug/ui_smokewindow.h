/********************************************************************************
** Form generated from reading UI file 'smokewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOKEWINDOW_H
#define UI_SMOKEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmokeWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmokeWindow)
    {
        if (SmokeWindow->objectName().isEmpty())
            SmokeWindow->setObjectName(QString::fromUtf8("SmokeWindow"));
        SmokeWindow->resize(800, 600);
        centralwidget = new QWidget(SmokeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SmokeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmokeWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        SmokeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SmokeWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SmokeWindow->setStatusBar(statusbar);

        retranslateUi(SmokeWindow);

        QMetaObject::connectSlotsByName(SmokeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SmokeWindow)
    {
        SmokeWindow->setWindowTitle(QApplication::translate("SmokeWindow", "SmokeWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmokeWindow: public Ui_SmokeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOKEWINDOW_H
