#ifndef STEAMWORKER
#define STEAMWORKER
#include "Creature.h"
#include "SteamCreature.h"

class SteamWorker : public Creature
{

    void BattlecryEffect(Board gBoard)
    {
        gBoard.getPlayerById(owner)->drawByName(STEAMCORE);
    }
    void initAttributes()
    {
        cost = 0;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 2;
        health = 1;
    }
};

#endif STEAMWORKER
