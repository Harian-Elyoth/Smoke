#include "Creature.h"

Creature::Creature () {
    initAttributes();
}

Creature::~Creature () {}

void Creature::initAttributes () {
        this->type = "Creature";
        this->AttackFlag = 0;
        this->BlockFlag = 0;
}

