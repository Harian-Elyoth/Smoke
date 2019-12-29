#ifndef STEAMMECHAWARRIOR

#include "Creature.h"
#include "Battlecry.h"
#include "Deathrattle.h"
#include "SteamCreature.h"

class SteamWorker : public Creature, public Battlecry, public Deathrattle
{

    void battleCryEffect(Board gBoard){
        gBoard.getPlayerById(owner)->attackBoostUp(1);
    }
    void deathRattleEffect(Board gBoard){
        gBoard.getPlayerById(owner)->attackBoostDown(1);
    }

    void initAttributes()
    {
        cost = 1;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 2;
        health = 2;
    }
};

#endif //  STEAMMECHAWARRIOR