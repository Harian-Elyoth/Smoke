#include "../Creature.h"
#include "../Battlecry.h"

class SteamGear : public Creature, public Battlecry
{

    void battlecryEffect()
    {
        
    }
    void initAttribute()
    {
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 1;
        health = 1;
    }
};
