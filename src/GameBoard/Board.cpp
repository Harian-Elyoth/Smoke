#include "Board.h"

Board::Board () {
    initAttributes();
}

Board::~Board () { }

void Board::passTurn(){
    if(activeP == &P1) activeP = &P2;
    else if(activeP == &P2) activeP = &P1;
    else activeP = &P1;
}

void Board::timerReset(){
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
}

std::ostream& operator<<(std::ostream& os, Board& b){
    os << *(b.getP1()) << *(b.getP2()) << std::endl;
    return os;
}

void Board::initAttributes () {
    activeP = &P1;
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
    turn = 0;
}

