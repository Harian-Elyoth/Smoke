#ifndef STEAMTRAINOR
#include "Creature.h"
class SteamCat : public Creature
{


    void initAttributes()
    {
        cost = 4;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 5;
        health = 5;
    }
};

#endif // !STEAMTRAINOR