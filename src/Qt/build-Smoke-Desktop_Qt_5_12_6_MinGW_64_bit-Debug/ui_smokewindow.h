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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "DeckWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmokeWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *handP2;
    QListWidget *boardP1;
    QListWidget *boardP2;
    QListWidget *handP1;
    DeckWidget *deckP2;
    QLabel *graveyardP2;
    DeckWidget *deckP1;
    QLabel *graveyardP1;
    QPushButton *endTurn;
    QLabel *field;
    QLabel *smokeP1;
    QLabel *smokeP2;

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
        handP2 = new QListWidget(gridLayoutWidget);
        handP2->setObjectName(QString::fromUtf8("handP2"));

        gridLayout->addWidget(handP2, 0, 1, 1, 1);

        boardP1 = new QListWidget(gridLayoutWidget);
        boardP1->setObjectName(QString::fromUtf8("boardP1"));

        gridLayout->addWidget(boardP1, 2, 1, 1, 1);

        boardP2 = new QListWidget(gridLayoutWidget);
        boardP2->setObjectName(QString::fromUtf8("boardP2"));

        gridLayout->addWidget(boardP2, 1, 1, 1, 1);

        handP1 = new QListWidget(gridLayoutWidget);
        handP1->setObjectName(QString::fromUtf8("handP1"));

        gridLayout->addWidget(handP1, 3, 1, 1, 1);

        deckP2 = new DeckWidget(gridLayoutWidget);
        deckP2->setObjectName(QString::fromUtf8("deckP2"));
        deckP2->setMouseTracking(true);

        gridLayout->addWidget(deckP2, 0, 2, 1, 1);

        graveyardP2 = new QLabel(gridLayoutWidget);
        graveyardP2->setObjectName(QString::fromUtf8("graveyardP2"));
        graveyardP2->setMouseTracking(true);

        gridLayout->addWidget(graveyardP2, 0, 0, 1, 1);

        deckP1 = new DeckWidget(gridLayoutWidget);
        deckP1->setObjectName(QString::fromUtf8("deckP1"));
        deckP1->setMouseTracking(true);

        gridLayout->addWidget(deckP1, 3, 2, 1, 1);

        graveyardP1 = new QLabel(gridLayoutWidget);
        graveyardP1->setObjectName(QString::fromUtf8("graveyardP1"));
        graveyardP1->setMouseTracking(true);

        gridLayout->addWidget(graveyardP1, 3, 0, 1, 1);

        endTurn = new QPushButton(gridLayoutWidget);
        endTurn->setObjectName(QString::fromUtf8("endTurn"));

        gridLayout->addWidget(endTurn, 2, 2, 1, 1);

        field = new QLabel(gridLayoutWidget);
        field->setObjectName(QString::fromUtf8("field"));

        gridLayout->addWidget(field, 1, 2, 1, 1);

        smokeP1 = new QLabel(gridLayoutWidget);
        smokeP1->setObjectName(QString::fromUtf8("smokeP1"));
        smokeP1->setMouseTracking(true);

        gridLayout->addWidget(smokeP1, 2, 0, 1, 1);

        smokeP2 = new QLabel(gridLayoutWidget);
        smokeP2->setObjectName(QString::fromUtf8("smokeP2"));
        smokeP2->setMouseTracking(true);

        gridLayout->addWidget(smokeP2, 1, 0, 1, 1);

        SmokeWindow->setCentralWidget(centralwidget);

        retranslateUi(SmokeWindow);

        QMetaObject::connectSlotsByName(SmokeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SmokeWindow)
    {
        SmokeWindow->setWindowTitle(QApplication::translate("SmokeWindow", "SmokeWindow", nullptr));
        deckP2->setText(QString());
        graveyardP2->setText(QApplication::translate("SmokeWindow", "GDP2", nullptr));
        deckP1->setText(QString());
        graveyardP1->setText(QApplication::translate("SmokeWindow", "GDP1", nullptr));
        endTurn->setText(QApplication::translate("SmokeWindow", "END", nullptr));
        field->setText(QApplication::translate("SmokeWindow", "FIELD", nullptr));
        smokeP1->setText(QApplication::translate("SmokeWindow", "SKP1", nullptr));
        smokeP2->setText(QApplication::translate("SmokeWindow", "SKP2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmokeWindow: public Ui_SmokeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOKEWINDOW_H
