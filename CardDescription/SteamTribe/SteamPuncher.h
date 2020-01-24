#ifndef STEAMPUNCHER
#include "Creature.h"
class SteamCat : public Creature
{

    void triggerEffect(Board gBoard){
        int size = gBoard.getPlayerById(owner)->getBattleground()->size();
        srand(time(NULL));
        int index = rand() % size;
        CardList *battlegroundPlayer = gBoard.getPlayerById(!owner)->getBattleground();
        Card toDestroyedCard = battlegroundPlayer->cList[index];
    }
    void initAttributes()
    {
        cost = 8;
        type = "Creature";
        race = "Steam";
        AttackFlag = 0;
        BlockFlag = 0;
        strength = 6;
        health = 6;
    }
};

#endif // !STEAMPUNCHER