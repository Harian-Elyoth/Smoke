
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

		CardList();

		virtual ~CardList ();

		void add (Card& card);

		void add (std::vector<Card> &cL);

		void erase(std::vector<Card>::iterator it);

		Card& front();

		std::vector<Card>::iterator begin();

		std::vector<Card>::iterator end();

		bool isEmpty();

		size_t size();

		void show ();

		void setCList (std::vector<Card> &new_var){cList = new_var;}

		std::vector<Card> &getCList (){return cList;}

		friend std::ostream& operator<<(std::ostream& os, CardList& cL);

		void operator=(CardList& cL);

private:

		std::vector<Card> cList;

		void initAttributes ();

};

#endif // CARDLIST_H
