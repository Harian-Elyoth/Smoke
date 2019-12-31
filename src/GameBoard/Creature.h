#ifndef CREATURE_H
#define CREATURE_H

#include "Card.h"

#include <string>

class Creature : virtual public Card
{
public:

		Creature ();

		virtual ~Creature ();

        std::string toString () {return "Creature";}

        void setType (std::string new_var) {Creature::type = new_var;}

        std::string getType () {return Creature::type;}

        void setStrength (int new_var) {strength = new_var;}

        int getStrength () {return strength;}

        void setHealth (int new_var) {health = new_var;}

        int getHealth () {return health;}

        void setAttackFlag (int new_var) {AttackFlag = new_var;}

        int getAttackFlag () {return AttackFlag;}

        void setBlockFlag (int new_var) {BlockFlag = new_var;}

        int getBlockFlag () {return BlockFlag;}

protected:

        // static std::string type;
		std::string race;
		int strength;
		int health;
		int AttackFlag;
		int BlockFlag;

private:

		void initAttributes () ;

};

#endif // CREATURE_H
