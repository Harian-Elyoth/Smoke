
#ifndef CARDLIST_H
#define CARDLIST_H
<<<<<<< HEAD
#include "Card.h"
=======
#pragma once
>>>>>>> BoardBranch

#include "Card.h"

#include <sstream>
#include <string>
#include <vector>

class CardList
{
public:

<<<<<<< HEAD
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
=======
		virtual ~CardList ();

		void add (Card *card);

		void add (std::vector<Card> &cL);

		virtual void show () = 0;

		void setCList (std::vector<Card> &new_var){cList = new_var;}

		std::vector<Card> &getCList (){return cList;}

		friend class Deck;
		friend class Graveyard;
		friend class Hand;
		friend class Board;

private:

		std::vector<Card> cList;

		virtual void initAttributes () = 0;
>>>>>>> BoardBranch

};

#endif // CARDLIST_H
