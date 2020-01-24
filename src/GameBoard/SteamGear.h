#pragma once
#ifndef STEAMGEAR_H
#define STEAMGEAR_H

#include "Creature.h"

class SteamGear : public Creature
{

public:
    SteamGear(){initAttributes();}

private :
    void initAttributes()
    {
        cost = 2;
        name = "SteamGear";
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 1;
        health = 1;
    }
};
#endif //STEAMGEAR_H

