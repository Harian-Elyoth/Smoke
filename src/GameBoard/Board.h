
#ifndef BOARD_H
#define BOARD_H
#pragma once

#include "Player.h"

#include <string>
#include <time.h>
#include <typeinfo>
#include <vector>

#include "SteamCreature.h"
#include "SteamCat.h"
#include "SteamBoiler.h"
#include "SteamGear.h"

#define MAX_CARDS 3

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

        Player* getPlayerById(int id){
            if(P1.getId() == id) return &P1;
            return &P2;
        }

        void setP2 (Player& new_var)	{P2 = new_var;}

        Player* getP2 ()	{return &P2;}

        Player* getActivePlayer(){return activeP;}

        void setTimeTurn (time_t new_var) {timeTurn = new_var;}

        time_t getTimeTurn () {return timeTurn;}

        void setTurn (int new_var)	{turn = new_var;}

        int getTurn () {return turn;}

        void setAllCards(CardList list){allCards = list;}

        CardList* getAllCards(){return &allCards;}

        ///////////////////////
        //  Other fonctions  //
        ///////////////////////

        bool verifGameEnd();

        void BeginPhase();

        void MainPhase();

        void CombatPhase();

        void EndPhase();

        void CheckBattlegroundsState();

        void options (){}

        void passTurn ();

        void timerReset ();

        friend std::ostream& operator<<(std::ostream& os, Board& b);

        void operator=(Board& board);

        Card* getField(){
            return &field;
        }

        void setField(Card *new_var){
            field = *new_var;
        }

        bool cardExists(CardList& cL, Card& card);

        std::vector<Card>::iterator cardToIterator(CardList& cL, Card& card);

        Card play(Card& card);

private:

        Player P1;
        Player P2;
        Player* activeP;
        time_t timeTurn;
        time_t timeStartTurn;
        int turn;
        Card field;

        CardList allCards;

        void resetTurnTimer (){}
        void nextTurn (){}
        void initAttributes ();


};

/////////////////////
///  Battlecries  ///
/////////////////////

void battlecrySteamCat(Board* gBoard, Card* card);

void battlecrySteamBoiler(Board* gBoard, Card* card);

void battlecrySteamGear(Board* gBoard, Card *card);

#endif // BOARD_H
