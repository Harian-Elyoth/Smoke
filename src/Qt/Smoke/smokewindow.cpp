#include "smokewindow.h"
#include "ui_smokewindow.h"
#include <QLabel>

#define WIDTH 900
#define HEIGHT 540

SmokeWindow::SmokeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmokeWindow)
{
    ui->setupUi(this);

    this->setFixedSize(WIDTH, HEIGHT);

    QPixmap background("../../../ressources/test.jpg");
    background.scaled((*this).size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    (*this).setPalette(palette);

    gridLayout = this->findChild<QGridLayout*>("gridLayout");
    Q_ASSERT(gridLayout);

    HP2 = (QListWidget*) gridLayout->itemAtPosition(0,1)->widget();
    HP1 = (QListWidget*) gridLayout->itemAtPosition(3,1)->widget();
    BP2 = (QListWidget*) gridLayout->itemAtPosition(1,1)->widget();
    BP1 = (QListWidget*) gridLayout->itemAtPosition(2,1)->widget();
    HP2->viewport()->setAutoFillBackground(false);
    HP2->setFrameStyle(QFrame::NoFrame);
    HP1->viewport()->setAutoFillBackground(false);
    HP1->setFrameStyle(QFrame::NoFrame);
    BP2->viewport()->setAutoFillBackground(false);
    BP2->setFrameStyle(QFrame::NoFrame);
    BP1->viewport()->setAutoFillBackground(false);
    BP1->setFrameStyle(QFrame::NoFrame);

    handP2 = new QHBoxLayout(HP2);
    handP1 = new QHBoxLayout(HP1);
    boardP2 = new QHBoxLayout(BP2);
    boardP1 = new QHBoxLayout(BP1);
    HP2->setLayout(handP2);
    HP1->setLayout(handP1);
    BP2->setLayout(boardP2);
    BP1->setLayout(boardP1);

    DP2 = (DeckWidget*) gridLayout->itemAtPosition(0,2)->widget();
    DP1 = (DeckWidget*) gridLayout->itemAtPosition(3,2)->widget();
    QPixmap cardBackPixmap("../../../ressources/cardback.jpg");
    QSize cardSize(cardBackPixmap.size().width()*((this->size().height()*0.2)/cardBackPixmap.size().height()), this->size().height()*0.2);
    DP2->setMaximumSize(cardSize);
    DP2->setMinimumSize(cardSize);
    DP1->setMaximumSize(cardSize);
    DP1->setMinimumSize(cardSize);
    QPixmap cardBack = cardBackPixmap.scaled(cardSize, Qt::KeepAspectRatio);
    DP2->setPixmap(cardBack);
    DP1->setPixmap(cardBack);
    QObject::connect(DP2, SIGNAL(hovered()), DP1, SLOT(hoveredSlot()));
    QObject::connect(DP2, SIGNAL(hovered()), DP1, SLOT(hoveredSlot()));
}

SmokeWindow::~SmokeWindow()
{
    delete ui;
}

