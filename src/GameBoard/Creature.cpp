#include "Creature.h"

Creature::Creature () {
    initAttributes();
}

Creature::~Creature () {}

void Creature::initAttributes () {
        this->type = "Creature";
        this->AttackFlag = 0;
        this->BlockFlag = 0;
        this->health = 0;
        this->strength = 0;
}

std::ostream& operator<<(std::ostream& os, const Creature& c){
    os << c.cost << " | " << c.name << " | " << c.strength << "/" << c.health << std::endl;
    return os;
}

