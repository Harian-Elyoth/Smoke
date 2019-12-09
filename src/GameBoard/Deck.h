
#ifndef DECK_H
#define DECK_H
#pragma once

#include "CardList.h"
#include "Card.h"

#include <string>
#include <vector>
<<<<<<< HEAD
#include <algorithm>
#include <random>
=======
>>>>>>> BoardBranch

class Deck : public CardList
{
public:

<<<<<<< HEAD
		// Constructors/Destructors
		//  

		Deck(std::vector<Card*> cL);

		/**
		 * Empty Constructor
		 */
=======
>>>>>>> BoardBranch
		Deck ();

		virtual ~Deck ();

<<<<<<< HEAD
		// Static Public attributes
		//  

		// Public attributes
		//  


		// Public attribute accessor methods
		//  


		// Public attribute accessor methods
		//  


		void show ();

		void shuffle();

		Card* burn ();
=======
		std::vector<Card> getCList() const{return this->cList;}

		void show (){}
>>>>>>> BoardBranch

		Card* draw ();

		Card* drawCost (int cost);

		Card* drawName (std::string name);

<<<<<<< HEAD
		Card* drawCreature ();

		Card* drawArtefact ();

		Card* drawField ();

		Card* drawSpell ();
	
private:

=======
		Card* drawTribe (std::string tribe);

		friend std::ostream& operator<<(std::ostream& os, const Deck& d);

private :

>>>>>>> BoardBranch
		void initAttributes () ;

};

#endif // DECK_H
