#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QPushButton>
#include <QMessageBox>
#include <QListWidget>
#include "smokewindow.h"
#include "../../GameBoard/Card.h"

class CardWidget : public QPushButton
{
    Q_OBJECT

public:
    CardWidget(QWidget *parent = nullptr);
    CardWidget(QIcon icon, QWidget *parent = nullptr);
    ~CardWidget();

    void setCard(Card* c){
        this->owner = c->getOwner();
        this->card = c;
    }

    Card* Card(){return card;}

    int getOwner(){return owner;}

private:
    class Card* card;
    int owner;

public slots:
    void cardClicked(){
        QMessageBox msgBox;
        msgBox.setWindowTitle("You clicked");
        msgBox.setText("You clicked");
        msgBox.exec();
    }

    void playCard();

};

#endif // CARDWIDGET_H
