#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QPushButton>
#include "../../GameBoard/Card.h"

class CardWidget : public QPushButton{

    Q_OBJECT

public:
    CardWidget(QWidget *parent = nullptr);
    CardWidget(QIcon icon, QWidget *parent = nullptr);
    ~CardWidget();

private:
    Card card;

};

#endif // CARDWIDGET_H
