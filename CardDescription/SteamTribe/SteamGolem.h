#ifndef STEAMGOLEM
#include "Creature.h"
class SteamCat : public Creature
{

    void initAttributes()
    {
        cost = 6;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 7;
        health = 7;
    }
};

#endif // !STEAMGOLEM