#include "CardWidget.h"

CardWidget::CardWidget(QWidget* parent){
    setParent(parent);
    QObject::connect(this, SIGNAL(clicked()), parent, SLOT(playeCard(this)));
    QObject::connect(this, SIGNAL(clicked()), this, SLOT(clicked(this)));
}

CardWidget::CardWidget(QIcon icon, QWidget* parent){
    setIcon(icon);
    setParent(parent);
}

CardWidget::~CardWidget(){ }
