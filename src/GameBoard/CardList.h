
#ifndef CARDLIST_H
#define CARDLIST_H
#pragma once

#include "Card.h"

#include <sstream>
#include <string>
#include <vector>

class CardList
{
public:

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

};

#endif // CARDLIST_H
