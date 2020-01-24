#ifndef STEAMCAT
#include "Creature.h"
class SteamCat : public Creature
{

    void BattlecryEffect(Board gBoard)
    {   
        gBoard.getPlayerById(owner)->draw();
    }
    void DeathrattleEffect(Board gBoard)
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