#include "Smoke.h"

int main(){
	Player P1((std::string)"Axel", (std::string)"Alucard");
	Card c1(5, (std::string)"Barbarius", P1.getId(), (std::string)"Cloud", (std::string)"Berserker");
	Card c2(2, (std::string)"Gloutonous Cat", P1.getId(), (std::string)"Toxic", (std::string)"Chat");
	Card c3(7, (std::string)"Astolfo", P1.getId(), (std::string)"Dust", (std::string)"Mage");
	(*P1.getDeck()).add(&c1);
	(*P1.getDeck()).add(&c2);
	(*P1.getDeck()).add(&c3);
	std::cout << "Affichage :" << std::endl;
	std::cout << P1 << std::endl;
	return 0;
}

