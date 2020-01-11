#include "Card.h"

Card::Card () {
    initAttributes();
}

Card::Card(const Card &c):
cost(c.cost),name(c.name),owner(c.owner),tribe(c.tribe),type(c.type){ }

Card::Card (int c, std::string n, int id, std::string tr, std::string ty):
cost(c), name(n), owner(id), tribe(tr), type(ty){}

Card::~Card () { }

std::ostream& operator<<(std::ostream& os, const Card& c){
    os << c.cost << " | " << c.name << std::endl;
    return os;
}

bool Card::operator!=(const Card& c){
    if(cost != c.cost) return true;
    if(name != c.name) return true;
    if(owner != c.owner) return true;
    if(tribe != c.tribe) return true;
    if(type != c.type) return true;
    return false;
}

bool Card::operator==(const Card& c){
    if(cost != c.cost) return false;
    if(name != c.name) return false;
    if(owner != c.owner) return false;
    if(tribe != c.tribe) return false;
    if(type != c.type) return false;
    return true;
}

void Card::initAttributes () {
    cost = 0;
    name = "ERROR";
    owner = -1;
    tribe = "ERROR";
    type = "ERROR";
    return;
}

