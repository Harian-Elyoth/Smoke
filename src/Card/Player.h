
#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include "CardList.h"
#include "Card.h"

#include <string>

#define SMOKE_WIN_CONDITION 250
#define SMOKE_LOOSE_CONDITION 0
#define SMOKE_START 100
#define SMOKE_GAIN_ON_TURN 10

class Card;

class Player
{
public:

		//////////////////////////////////
		//  Constructors et Destructor  //
		//////////////////////////////////

		Player ();

		Player(std::string n, CardList &d, std::string h);

		Player(std::string n, std::string h);

		virtual ~Player ();

		////////////////////////////
		//  Setters and guetters  //
		////////////////////////////

		void setId(int new_var){id = new_var;}

		int getId(){return id;}

		void setName (std::string new_var){name = new_var;}

		std::string getName () const{return name;}

		void setSmoke (int new_var){smoke = new_var;}

		void looseSmoke(int new_var){smoke -= new_var;}
		void gainSmoke(int new_var){smoke += new_var;}
		int getSmoke (){return smoke;}

		void setHand (CardList new_var){hand = new_var;}

		CardList* getHand (){return &hand;}

		void setGraveyard (CardList new_var){graveyard = new_var;}

		CardList* getGraveyard (){return &graveyard;}

		void setDeck (CardList new_var){deck = new_var;}

		CardList* getDeck () {return &deck;}

		void setBattleground (CardList new_var){battleground = new_var;}

		CardList* getBattleground (){return &battleground;}

		void setHero (std::string new_var){hero = new_var;}
		
		std::string getHero (){return hero;}
		
		void setNormalSummon (bool new_var)	{normalSummon = new_var;}
		
		bool getNormalSummon ()	{return normalSummon;}
		
		void setFullBoard (bool new_var) {fullBoard = new_var;}
		
		bool getFullBoard () {return fullBoard;}

		///////////////////////
		//  Other fonctions  //
		///////////////////////

		bool winConditionVerif();

		bool looseConditionVerif();

		Card play(Card& card);

		Card draw();

		Card drawByName(std::string name);

		Card drawCost(int cost);

		Card discard();

		Card burn();

		Card destroy(Card& card);

		Card exile(Card& card, CardList& zone);

		Card summonCostOrLess(CardList source, int cost);

		Card summon(CardList source, Card card);

		// Card activate(Card c);

		friend std::ostream& operator<<(std::ostream& os, Player& P);

		void operator=(Player& P);

		void attackBoostUp(int boost){attackBoost += boost;}

		void attackBoostDown(int boost){attackBoost -= boost;}

		void healthBoostUp(int boost) { healthBoost += boost; }

		void healthBoostDown(int boost) { healthBoost -= boost; }

	private:

		static int id;
		std::string name;
		int smoke;
		CardList hand;
		CardList graveyard;
		CardList deck;
		CardList battleground;
		std::string hero;
		bool normalSummon;
		bool fullBoard;
		bool win;
		int attackBoost;
		int healthBoost;

		void initAttributes ();

		bool cardExists(CardList& cL, Card& card);

		std::vector<Card>::iterator cardToIterator(CardList& cL, Card& card);

};

#endif // PLAYER_H
