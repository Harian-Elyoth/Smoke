#include "Smoke.h"

int main(){
	// gameStart();
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
	board.getP1()->draw();
	board.getP1()->drawCost(7);
	board.getP1()->play(c1);
	board.getP2()->exile(c3, *board.getP2()->getDeck());
	board.getP1()->destroy(c1);
	std::cout << board << std::endl;
	return 0;
}

