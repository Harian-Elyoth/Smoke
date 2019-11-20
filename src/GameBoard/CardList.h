
#ifndef CARDLIST_H
#define CARDLIST_H
#include "Deck.h"
#include "Hand.h"
#include "Graveyard.h"
#include "Battleground.h"

#include "Card.h"

#include <string>
#include <vector>



/**
  * class CardList
  * 
  */

class CardList : public Deck, public Hand, public Graveyard, public Battleground
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		CardList ();

		/**
		 * Empty Destructor
		 */
		virtual ~CardList ();

		// Static Public attributes
		//  

		// Public attributes
		//  


		// Public attribute accessor methods
		//  


		// Public attribute accessor methods
		//  



		/**
		 * @param  card
		 */
		void add (Card* card)
		{
		}


		/**
		 * @param  cList
		 */
		void add (vector<Card*> cList)
		{
		}


		/**
		 */
		void add (vector<Card*> cList)
		{
		}


private:

		// Static Private attributes
		//  

		// Private attributes
		//  

		int length;
public:

private:


		// Private attribute accessor methods
		//  

		/**
		 * Set the value of cList
		 * @param new_var the new value of cList
		 */
		void setCList (vector<Card*> new_var)		 {
						cList = new_var;
		}

		/**
		 * Get the value of cList
		 * @return the value of cList
		 */
		vector<Card*> getCList ()		 {
				return cList;
		}

		void initAttributes () ;

};

#endif // CARDLIST_H
