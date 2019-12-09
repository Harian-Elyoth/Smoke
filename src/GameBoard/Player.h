
#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include "Battleground.h"
#include "Deck.h"
#include "Card.h"

#include <string>

class Card;

class Player
{
public:

		Player ();

		Player(std::string n, Deck &d, std::string h);

		Player(std::string n, std::string h);

		virtual ~Player ();

		void play (Card* card){}

		void setId(int new_var){id = new_var;}

		int getId(){return id;}

		void setName (std::string new_var){name = new_var;}

		std::string getName () const{return name;}

		void setSmoke (int new_var){smoke = new_var;}

		int getSmoke (){return smoke;}

		// void setHand (Hand new_var){hand = new_var;}

		// Hand getHand (){return hand;}

		// void setGraveyard (Graveyard new_var){graveyard = new_var;}

		// Graveyard getGraveyard (){return graveyard;}

		void setDeck (Deck new_var){deck = new_var;}

		Deck* getDeck () {return &deck;}

		// void setBattleground (Battleground new_var){battleground = new_var;}

		// Battleground getBattleground (){return battleground;}

		void setHero (std::string new_var){hero = new_var;}
		
		std::string getHero (){return hero;}
		
		void setNormalSummon (bool new_var)	{normalSummon = new_var;}
		
		bool getNormalSummon ()	{return normalSummon;}
		
		void setFullBoard (bool new_var) {fullBoard = new_var;}
		
		bool getFullBoard () {return fullBoard;}

		Player operator=(const Player& P);

		friend std::ostream& operator<<(std::ostream& os, Player& P);

private:

		static int id;
		std::string name;
		int smoke;
		// Hand hand;
		// Graveyard graveyard;
		Deck deck;
		// Battleground battleground;
		std::string hero;
		bool normalSummon;
		bool fullBoard;
		void initAttributes () ;

};

#endif // PLAYER_H
