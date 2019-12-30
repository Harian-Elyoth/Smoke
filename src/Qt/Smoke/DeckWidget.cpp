#include "DeckWidget.h"

DeckWidget::DeckWidget(QWidget* parent){
    this->setParent(parent);
}

void DeckWidget::setPlayer(CardList* cL){
    this->cL = cL;
    return;
}

int DeckWidget::DeckSize(){
    return cL->size();
}
