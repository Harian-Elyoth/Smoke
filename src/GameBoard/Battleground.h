
#ifndef BATTLEGROUND_H
#define BATTLEGROUND_H
#include "CardList.h"

#include <string>
#include <vector>



/**
  * class Battleground
  * 
  */

class Battleground : public CardList
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Battleground ();

		/**
		 * Empty Destructor
		 */
		virtual ~Battleground ();

		// Static Public attributes
		//  

		// Public attributes
		//  


		// Public attribute accessor methods
		//  


		// Public attribute accessor methods
		//  



		/**
		 */
		void show ()
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


private:

		// Static Private attributes
		//  

		// Private attributes
		//  

		vector<Buff*> buffs;
public:


		// Private attribute accessor methods
		//  

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of buffs
		 * @param new_var the new value of buffs
		 */
		void setBuffs (vector<Buff*> new_var)		 {
						buffs = new_var;
		}

		/**
		 * Get the value of buffs
		 * @return the value of buffs
		 */
		vector<Buff*> getBuffs ()		 {
				return buffs;
		}
private:


		void initAttributes () ;

};

#endif // BATTLEGROUND_H