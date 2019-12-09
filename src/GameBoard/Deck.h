
#ifndef DECK_H
#define DECK_H
#pragma once

#include "CardList.h"
#include "Card.h"

#include <string>
#include <vector>

class Deck : public CardList
{
public:

		Deck ();

		virtual ~Deck ();

		std::vector<Card> getCList() const{return this->cList;}

		void show (){}

		Card* draw ();

		Card* drawCost (int cost);

		Card* drawName (std::string name);

		Card* drawTribe (std::string tribe);

		friend std::ostream& operator<<(std::ostream& os, const Deck& d);

private :

		void initAttributes () ;

};

#endif // DECK_H
