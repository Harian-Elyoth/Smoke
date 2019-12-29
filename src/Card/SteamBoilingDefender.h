#ifndef STEAMBOILINGDEFENDER
#define STEAMBOILINGDEFENDER

#include "Creature.h"
#include "Trigger.h"
#include "SteamCreature.h"
#include "Board.h"

class SteamBoilingDefender : public Creature, public Trigger
{

    void TriggerEffect(Board gBoard)
    {
        gBoard.getPlayerById(owner)->looseSmoke(5);
        int temp = strength;
        strength = health;
        health = temp;
        invinsibleFlag = 1;
    }
    void initAttributes()
    {
        cost = 2;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 1;
        health = 4;
    }

    void reset()
    {
        invinsibleFlag = 0;
    }
};

#endif // !STEAMBOILINGDEFENDER
