#include "Smoke.h"

/*void addCard(SmokeWindow* w, QHBoxLayout* hand, CardWidget* card){
    QPixmap cardBack("../../../ressources/cardback.jpg");
    QIcon cardBackIcon(cardBack);
    QSize cardSize(cardBack.size().width()*((w->size().height()*0.2)/cardBack.size().height()), w->size().height()*0.2);
    card->setIcon(cardBackIcon);
    card->setMaximumSize(cardSize);
    card->setMinimumSize(cardSize);
    card->setIconSize(cardSize);
    hand->addWidget(card);
    return;
}*/

int main(int argc, char *argv[]){
    gameStart();

    /*QApplication a(argc, argv);
    SmokeWindow* w = new SmokeWindow();
    w->show();

    //Testing adding card

    CardWidget* card = new CardWidget(w);
    CardWidget* card2 = new CardWidget(w);

    CardList* deckTest = new CardList();
    SteamCat sC;
    deckTest->add(sC);
    w->getDP2()->setDeck(deckTest);

    card->setCard(new SteamCat());
    addCard(w, (QHBoxLayout*) w->getHP1(), card);
    addCard(w, (QHBoxLayout*) w->getHP2(), card2);

    return a.exec();*/
}

