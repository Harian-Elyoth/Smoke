#ifndef STEAMCAT

#include "Creature.h"
/*#include "Battlecry.h"
#include "Deathrattle.h"*/

class SteamCat : public Creature/*, public Deathrattle, public Battlecry*/
{

public :

    SteamCat(){initAttributes();}

    /*void battlecryEffect(Board* gBoard)
    {   
        gBoard->getPlayerById(this->owner)->draw();
    }

    void deathrattleEffect(Board* gBoard)
    {
        gBoard->getPlayerById(owner)->summonCostOrLess(*(gBoard->getPlayerById(owner)->getDeck()), 2);
    }*/

private :

    void initAttributes()
    {
        cost = 3;
        name = "SteamCat";
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 1;
        health = 1;
    }
};

#endif // !STEAMCAT
