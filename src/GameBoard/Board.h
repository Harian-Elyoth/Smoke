
#ifndef BOARD_H
#define BOARD_H
#pragma once

#include "Player.h"

#include <string>
#include <time.h>

class Board
{
public:

		friend class Card;
		friend class Player;
		friend class CardList;
		
		//////////////////////////////////
		//  Constructors et Destructor  //
		//////////////////////////////////

		Board ();

		virtual ~Board ();

		////////////////////////////
		//  Setters and guetters  //
		////////////////////////////

		void setP1 (Player& new_var) {P1 = new_var;}

		Player* getP1 ()	{return &P1;}

		void setP2 (Player& new_var)	{P2 = new_var;}

		Player* getP2 ()	{return &P2;}

		Player* getActivePlayer(){return activeP;}

		void setTimeTurn (time_t new_var) {timeTurn = new_var;}

		time_t getTimeTurn () {return timeTurn;}

		void setTurn (int new_var)	{turn = new_var;}

		int getTurn () {return turn;}

		///////////////////////
		//  Other fonctions  //
		///////////////////////

		bool verifGameEnd();

		void BeginPhase();

		void MainPhase(){}

		void CombatPhase(){}

		void EndPhase();

		void options (){}

		void passTurn ();

		void timerReset ();

        Player* getPlayer(int id);

        Player* getOpponent(int id);

		friend std::ostream& operator<<(std::ostream& os, Board& b);

		void operator=(Board& board);

private:

		Player P1;
		Player P2;
		Player* activeP;
		time_t timeTurn;
		time_t timeStartTurn;
		int turn;

		void resetTurnTimer (){}
		void nextTurn (){}
		void initAttributes ();

};

#endif // BOARD_H
