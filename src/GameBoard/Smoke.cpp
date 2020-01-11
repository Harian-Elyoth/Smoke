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

	Board board;

	Player P1((std::string)"Axel", (std::string)"Alucard");
	Player P2((std::string)"Elyoth", (std::string)"Rasputin");
	
    Card* allCards = new Card[3];
    for(int i = 0; i < 3; i++){
        allCards[i] = SteamCat();
        allCards[i].setOwner(P1.getId());
    }

    board.setP1(P1);
	board.setP2(P2);
	board.getP1()->getDeck()->add(allCards[0]);
	board.getP1()->getDeck()->add(allCards[1]);
	board.getP1()->getDeck()->add(allCards[2]);
    board.getP2()->getDeck()->add(allCards[0]);
	board.getP2()->getDeck()->add(allCards[1]);
	board.getP2()->getDeck()->add(allCards[2]);

    board.getP1()->draw();

    std::cout << board << std::endl;

    board.play(allCards[0]);

    std::cout << board << std::endl;

    delete[] allCards;

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

