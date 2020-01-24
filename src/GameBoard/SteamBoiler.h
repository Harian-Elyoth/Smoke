#ifndef STEAMBOILER
#define STEAMBOILER

#include "Creature.h"

class SteamBoiler : public Creature{

    public :

        SteamBoiler(){initAttributes();}

        void init(){std::cout << "STEAMBOILER" << std::endl;}

    private :

        void initAttributes()
        {
            cost = 4;
            name = "SteamBoiler";
            type = "Creature";
            race = "Steam";
            AttackFlag = 0;
            BlockFlag = 0;
            strength = 2;
            health = 1;
        }

};

#endif //STEAMBOILER