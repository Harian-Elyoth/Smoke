#include "DeckWidget.h"

DeckWidget::DeckWidget(QWidget* parent){
    this->setParent(parent);
}

void DeckWidget::setDeck(CardList* cL){
    this->cL = cL;
    return;
}

QString DeckWidget::DeckSize(){
    return QString::fromStdString(std::to_string(cL->size()));
}
