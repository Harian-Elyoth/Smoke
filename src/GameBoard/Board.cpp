#include "Board.h"

Board::Board () {
    initAttributes();
}

Board::~Board () {
    delete[] activeP;
}

void Board::passTurn(){
    if(activeP == &P1) activeP = &P2;
    else if(activeP == &P2) activeP = &P1;
    else activeP = &P1;
}

void Board::timerReset(){
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
}

void Board::initAttributes () {
    Player P;
    P1 = P;
    P2 = P;
    activeP = &P1;
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
    turn = 0;
}

