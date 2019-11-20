
#ifndef GRAVEYARD_H
#define GRAVEYARD_H
#include "CardList.h"
#include "CardList.h"

#include <string>

/**
  * class Graveyard
  * 
  */

class Graveyard : public CardList, public CardList
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Graveyard ();

		/**
		 * Empty Destructor
		 */
		virtual ~Graveyard ();

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


		/**
		 * @return Card*
		 * @param  card
		 */
		Card* getCard (Card* card)
		{
		}


		/**
		 * @param  card
		 */
		void exile (Card* card)
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

public:


		// Private attribute accessor methods
		//  

private:

public:


		// Private attribute accessor methods
		//  

private:



};

#endif // GRAVEYARD_H
