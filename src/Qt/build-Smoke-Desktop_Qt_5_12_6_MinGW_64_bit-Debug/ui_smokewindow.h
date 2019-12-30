/********************************************************************************
** Form generated from reading UI file 'smokewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOKEWINDOW_H
#define UI_SMOKEWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "DeckWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmokeWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *decaleur;
    QListWidget *listWidget;
    DeckWidget *deckP2;
    QListWidget *handP2;
    QListWidget *handP1;
    DeckWidget *deckP1;
    QListWidget *listWidget_2;

    void setupUi(QMainWindow *SmokeWindow)
    {
        if (SmokeWindow->objectName().isEmpty())
            SmokeWindow->setObjectName(QString::fromUtf8("SmokeWindow"));
        SmokeWindow->resize(900, 540);
        SmokeWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStatesMinorOutlyingIslands));
        SmokeWindow->setIconSize(QSize(900, 540));
        centralwidget = new QWidget(SmokeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 901, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(161);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        decaleur = new QLabel(gridLayoutWidget);
        decaleur->setObjectName(QString::fromUtf8("decaleur"));

        gridLayout->addWidget(decaleur, 0, 0, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 1, 1, 1);

        deckP2 = new DeckWidget(gridLayoutWidget);
        deckP2->setObjectName(QString::fromUtf8("deckP2"));

        gridLayout->addWidget(deckP2, 0, 2, 1, 1);

        handP2 = new QListWidget(gridLayoutWidget);
        handP2->setObjectName(QString::fromUtf8("handP2"));

        gridLayout->addWidget(handP2, 0, 1, 1, 1);

        handP1 = new QListWidget(gridLayoutWidget);
        handP1->setObjectName(QString::fromUtf8("handP1"));

        gridLayout->addWidget(handP1, 3, 1, 1, 1);

        deckP1 = new DeckWidget(gridLayoutWidget);
        deckP1->setObjectName(QString::fromUtf8("deckP1"));

        gridLayout->addWidget(deckP1, 3, 2, 1, 1);

        listWidget_2 = new QListWidget(gridLayoutWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout->addWidget(listWidget_2, 1, 1, 1, 1);

        SmokeWindow->setCentralWidget(centralwidget);

        retranslateUi(SmokeWindow);

        QMetaObject::connectSlotsByName(SmokeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SmokeWindow)
    {
        SmokeWindow->setWindowTitle(QApplication::translate("SmokeWindow", "SmokeWindow", nullptr));
        decaleur->setText(QString());
        deckP2->setText(QString());
        deckP1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SmokeWindow: public Ui_SmokeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOKEWINDOW_H
