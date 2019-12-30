#include "CardWidget.h"

CardWidget::CardWidget(QWidget* parent){
    setParent(parent);
}

CardWidget::CardWidget(QIcon icon, QWidget* parent){
    setIcon(icon);
    setParent(parent);
}

CardWidget::~CardWidget(){ }
