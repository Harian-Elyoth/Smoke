
#ifndef HAND_H
#define HAND_H
#include "CardList.h"

#include <string>

/**
  * class Hand
  * 
  */

class Hand : public CardList
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Hand ();

		/**
		 * Empty Destructor
		 */
		virtual ~Hand ();

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
		Card* discard (Card* card)
		{
		}


		/**
		 * @param  card
		 */
		void burn (Card* card)
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

#endif // HAND_H
