#include "Smoke.h"

#define WIDTH 900
#define HEIGHT 540

// QSize WINDOW_SIZE(WIDTH, HEIGHT);

void initMainWindow(SmokeWindow* w){

    //////////////////////////
    //  Setting Background  //
    //////////////////////////

    w->setFixedSize(WIDTH, HEIGHT);

    QPixmap background("../../../ressources/test.jpg");
    background.scaled((*w).size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    (*w).setPalette(palette);

    w->show();
    return;
}

void addCard(SmokeWindow* w, QWidget* hand, CardWidget& card){
    QPixmap cardBack("../../../ressources/cardback.jpg");
    QIcon cardBackIcon(cardBack);
    QSize cardSize(cardBack.size().width()*((w->size().height()*0.2)/cardBack.size().height()), w->size().height()*0.2);
    card.setIcon(cardBackIcon);
    card.setMaximumSize(cardSize);
    card.setMinimumSize(cardSize);
    card.setIconSize(cardSize);
    hand->layout()->addWidget(&card);
    return;
}

int main(int argc, char *argv[]){
    /*gameStart();
	Board board;
	Player P1((std::string)"Axel", (std::string)"Alucard");
	Player P2((std::string)"Elyoth", (std::string)"Rasputin");
	Card c1(5, (std::string)"Barbarius", P1.getId(), (std::string)"Cloud", (std::string)"Berserker");
	Card c2(2, (std::string)"Gloutonous Cat", P1.getId(), (std::string)"Toxic", (std::string)"Chat");
	Card c3(7, (std::string)"Astolfo", P1.getId(), (std::string)"Dust", (std::string)"Mage");
	board.setP1(P1);
	board.setP2(P2);
	board.getP1()->getDeck()->add(c1);
	board.getP1()->getDeck()->add(c2);
	board.getP1()->getDeck()->add(c3);
    board.getP2()->getDeck()->add(c3);

    std::cout << board << std::endl;*/

    QApplication a(argc, argv);
    SmokeWindow* w = new SmokeWindow();
    initMainWindow(w);
    CardWidget* card = new CardWidget(w);
    ((QListWidget*)w->ui.handP2)->;

    return a.exec();
}

