
#ifndef CARDLIST_H
#define CARDLIST_H
#include "Card.h"

#include <string>
#include <vector>

class CardList
{
public:

		/**
		 * Empty Destructor
		 */
		virtual ~CardList ();

		void add (Card* card);

		void add (std::vector<Card*> cL);

		virtual void show ();

		void setCList (std::vector<Card*> new_var){cList = new_var;}

		std::vector<Card*> getCList (){return cList;}

protected:

		// Protected attributes
		//  
		std::vector<Card*> cList;

private:

		void initAttributes () ;

};

#endif // CARDLIST_H
