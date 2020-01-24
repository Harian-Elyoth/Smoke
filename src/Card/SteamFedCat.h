#ifndef STEAMFEDCAT
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
        strength = 2;
        health = 6;
    }
};

#endif // !STEAMFEDCAT