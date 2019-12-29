#ifndef STEAMAUTOMATON
#include "Creature.h"
#include "Battlecry.h"
#include "SteamCreature.h"

class SteamAutomaton : public Creature, public Battlecry {

    public :

        void BattleCryEffect(Board gBoard){
            //MECANIQUE DE JEU A RAJOUTER
        }
    
        void initAttributes(){
            cost = 1;
            type = "Creature";
            race = "Steam";
            AttackFlag = 0;
            BlockFlag = 0;
            strength = 1;
            health = 2;
        }
};
#endif // !STEAMAUTOMATON