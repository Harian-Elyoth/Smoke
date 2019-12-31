
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

		//////////////////////////////////
		//  Constructors et Destructor  //
		//////////////////////////////////

		CardList();

		virtual ~CardList ();

		////////////////////////////
		//  Setters and guetters  //
		////////////////////////////

		void setCList (std::vector<Card> &new_var){cList = new_var;}

		std::vector<Card> &getCList (){return cList;}

        void setMaxSize (int mS){maxSize = mS;}

        int getMaxSize (){return maxSize;}

		///////////////////////
		//  Other fonctions  //
		///////////////////////

		void add (Card& card);

		void add (std::vector<Card> &cL);

		void erase(std::vector<Card>::iterator it);

		Card& front();

		std::vector<Card>::iterator begin();

		std::vector<Card>::iterator end();

		bool isEmpty();

        bool isFull();

		size_t size();

		void show ();

		friend std::ostream& operator<<(std::ostream& os, CardList& cL);

		void operator=(CardList& cL);

private:

		std::vector<Card> cList;

        int maxSize;

		void initAttributes ();

};

#endif // CARDLIST_H
