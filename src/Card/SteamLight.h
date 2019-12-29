#ifndef STEAMLIGHT_H
#define STEAMLIGHT_H
#include "Creature.h"
#include "Deathrattle.h"
#include "Board.h"
#include "SteamCreature.h"

class SteamLight : public Creature, public Deathrattle {

    public:

    void deathRattleEffect(Board gBoard){
        gBoard.getPlayerById(owner)->gainSmoke(2);
        if (!(STEAMCORE.compare(gBoard.getField()->getName())))
        {
            gBoard.getPlayerById(owner)->gainSmoke(3);
        }
    }

    void initAttributes()
    {
        cost = 0;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 0;
        health = 2;
    }
};

#endif STEAMLIGHT_H
