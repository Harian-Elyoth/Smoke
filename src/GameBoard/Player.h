
#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include "CardList.h"
#include "Card.h"

#include <string>

class Card;

class Player
{
public:

		/////////////////////////////////////
		//  Constructeurs et Destructeur  ///
		/////////////////////////////////////

		Player ();

		Player(std::string n, CardList &d, std::string h);

		Player(std::string n, std::string h);

		virtual ~Player ();

		////////////////////////////
		//  Setters et guetters  ///
		////////////////////////////

		void setId(int new_var){id = new_var;}

		int getId(){return id;}

		void setName (std::string new_var){name = new_var;}

		std::string getName () const{return name;}

		void setSmoke (int new_var){smoke = new_var;}

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

		/////////////////////////
		//  Autres fonctions  ///
		/////////////////////////

		Card play(Card& card);

		Card emptyDeck();

		Card draw();

		Card drawCost(int cost);

		Card discard();

		Card burn();

		friend std::ostream& operator<<(std::ostream& os, Player& P);

		void operator=(Player& P);

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
		void initAttributes ();

};

#endif // PLAYER_H
