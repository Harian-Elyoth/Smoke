
#ifndef CARDLIST_H
#define CARDLIST_H

#include "Card.h"

#include <string>
#include <vector>


class CardList
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



		/**
		 */
		void shuffle ()
		{
		}


		/**
		 * @param  c
		 */
		void add (Card * c)
		{
		}


		/**
		 * @param  cList
		 */
		void add (vector<Card*> cList)
		{
		}


private:

		// Private attributes
		//  

		int length;



		// Private attribute accessor methods
		//  

		/**
		 * Set the value of length
		 * @param new_var the new value of length
		 */
		void setLength (int new_var)		 {
						length = new_var;
		}

		/**
		 * Get the value of length
		 * @return the value of length
		 */
		int getLength ()		 {
				return length;
		}

		void initAttributes () ;

};

#endif // CARDLIST_H
