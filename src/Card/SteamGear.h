#pragma once
#ifndef STEAMGEAR_H
#define STEAMGEAR_H
#include "Creature.h"
#include "Battlecry.h"
#include "Board.h"
#include "SteamCreature.h"
#include <string.h>

class SteamGear : public Creature, public Battlecry
{

    void battlecryEffect(Board gBoard)
    {
        gBoard.getPlayerById(owner)->gainSmoke(2);
        if(!(STEAMCORE.compare(gBoard.getField()->getName()))){
            gBoard.getPlayerById(owner)->gainSmoke(3);
        }
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
#endif STEAMGEAR_H

