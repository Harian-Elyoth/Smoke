#include "Card.h"

Card::Card () {
    initAttributes();
}

Card::Card (int c, std::string n, int id, std::string tr, std::string ty):
cost(c), name(n), owner(id), tribe(tr), type(ty){}

Card::~Card () { }

std::ostream& operator<<(std::ostream& os, const Card& c){
    os << c.cost << " | " << c.name << std::endl;
}

void Card::initAttributes () {
    cost = 0;
    name = "ERROR";
    owner = -1;
    tribe = "ERROR";
    type = "ERROR";
    return;
}

