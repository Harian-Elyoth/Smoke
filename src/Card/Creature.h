
#ifndef CREATURE_H
#define CREATURE_H
#include "Card.h"


#include <string>

/**
  * class Creature
  * 
  */

class Creature : virtual public Card
{
public:


		Creature ();

		virtual ~Creature ();


		/**
		 */
		void effect ()
		{
		}


		std::string toString ()
		{
		}

protected:

		// Static Protected attributes
		//  

		// Protected attributes
		//  

public:


		// Protected attribute accessor methods
		//  

protected:

public:


		// Protected attribute accessor methods
		//  

protected:


protected:

		// Static Private attributes
		//  

		static std::string type;
		// Private attributes
		//  
		std::string race;
		int strength;
		int health;
		int AttackFlag;
		int BlockFlag;
public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of type
		 * @param new_var the new value of type
		 */
		void setType (std::string new_var)		 {
						Creature::type = new_var;
		}

		/**
		 * Get the value of type
		 * @return the value of type
		 */
		std::string getType ()		 {
				return Creature::type;
		}
private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of strength
		 * @param new_var the new value of strength
		 */
		void setStrength (int new_var)		 {
						strength = new_var;
		}

		/**
		 * Get the value of strength
		 * @return the value of strength
		 */
		int getStrength ()		 {
				return strength;
		}

		/**
		 * Set the value of health
		 * @param new_var the new value of health
		 */
		void setHealth (int new_var)		 {
						health = new_var;
		}

		/**
		 * Get the value of health
		 * @return the value of health
		 */
		int getHealth ()		 {
				return health;
		}

		/**
		 * Set the value of AttackFlag
		 * @param new_var the new value of AttackFlag
		 */
		void setAttackFlag (int new_var)		 {
						AttackFlag = new_var;
		}

		/**
		 * Get the value of AttackFlag
		 * @return the value of AttackFlag
		 */
		int getAttackFlag ()		 {
				return AttackFlag;
		}

		/**
		 * Set the value of BlockFlag
		 * @param new_var the new value of BlockFlag
		 */
		void setBlockFlag (int new_var)		 {
						BlockFlag = new_var;
		}

		/**
		 * Get the value of BlockFlag
		 * @return the value of BlockFlag
		 */
		int getBlockFlag ()		 {
				return BlockFlag;
		}
private:


		void initAttributes () ;

};

#endif // CREATURE_H
