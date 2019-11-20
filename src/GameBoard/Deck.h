
#ifndef DECK_H
#define DECK_H
#include "CardList.h"

#include <string>
#include <vector>
#include <algorithm>
#include <random>

class Deck : public CardList
{
public:

		// Constructors/Destructors
		//  

		Deck(std::vector<Card*> cL);

		/**
		 * Empty Constructor
		 */
		Deck ();

		/**
		 * Empty Destructor
		 */
		virtual ~Deck ();

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

		Card* draw ();

		Card* drawCost (int cost);

		Card* drawName (std::string name);

		Card* drawCreature ();

		Card* drawArtefact ();

		Card* drawField ();

		Card* drawSpell ();
	
private:

		void initAttributes () ;

};

#endif // DECK_H
