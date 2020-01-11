#include "CardWidget.h"

CardWidget::CardWidget(QWidget* parent){
    setParent(parent);
    QObject::connect(this, SIGNAL(clicked()), this, SLOT(playCard()));
    // QObject::connect(this, SIGNAL(clicked()), this, SLOT(cardClicked()));
}

CardWidget::CardWidget(QIcon icon, QWidget* parent){
    setIcon(icon);
    setParent(parent);
}

void CardWidget::playCard(){
    int id = this->getOwner();
    QHBoxLayout* hand;
    QHBoxLayout* battleground;
    SmokeWindow* w = (SmokeWindow*) this->parent();
    int i = 0;

    QMessageBox msgBox;
    msgBox.setWindowTitle("You clicked");
    msgBox.setText(QString::fromStdString(std::to_string(id)));
    msgBox.exec();

    if(id == w->getBoard()->getP1()->getId()){
        hand = w->getHP1();
        battleground = w->getBP1();
    }
    else{
        hand = w->getHP2();
        battleground = w->getBP1();
    }

    if(w->getBoard()->getActivePlayer()->getId() != id || w->getBoard()->getActivePlayer()->getBattleground()->isFull()) return;

    while(this != (CardWidget*)hand->layout()->itemAt(i)->widget() && i < hand->layout()->count()) i++;
    hand->layout()->takeAt(i);
    battleground->layout()->addWidget(this);
    w->getBoard()->getActivePlayer()->play(*Card());
}

CardWidget::~CardWidget(){ }
