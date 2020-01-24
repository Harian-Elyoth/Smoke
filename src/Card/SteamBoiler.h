#ifndef STEAMBOILER
#define STEAMBOILER

#include "Creature.h"
#include "Battlecry.h"

class SteamBoiler : public Creature {

    public :

        void battleCryEffect(Board gBoard){
            Player * p = gBoard.getPlayerById(owner);
            Card * cardDrawn = NULL;
            *cardDrawn = p->draw();
            if(cardDrawn->getType().compare(CREATURE)){
                p->summon(*(p->getHand()), *cardDrawn);
            }
            else {
                (p->getHand())->getCList().pop_back();
            }
        }

};

#endif STEAMBOILER