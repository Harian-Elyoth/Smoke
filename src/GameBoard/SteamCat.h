#ifndef STEAMCAT

#include "Creature.h"
#include "Battlecry.h"
#include "Deathrattle.h"

class SteamCat : public Creature, public Deathrattle, public Battlecry
{

    void battlecryEffect(Board gBoard)
    {   
        gBoard.getPlayerById(this->owner)->draw();
    }
    void deathrattleEffect(Board gBoard)
    {
        Player * p = gBoard.getPlayerById(owner);
        p->summonCostOrLess(*(p->getDeck()), 2);
    }
    void initAttributes()
    {
        cost = 3;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 1;
        health = 1;
    }
};

#endif // !STEAMCAT
