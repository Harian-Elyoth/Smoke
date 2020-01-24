#ifndef STEAMLOCOMOTIVE
#include "Creature.h"
class SteamCat : public Creature
{

    int triggerEffect(Board gBoard){
        strength += 1;
        health += 1;
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

#endif // !STEAMLOCOMOTIVE