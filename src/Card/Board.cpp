#include "Board.h"

Board::Board () {
    initAttributes();
}

Board::~Board () { }

bool Board::verifGameEnd(){
    return (P1.winConditionVerif() | P1.looseConditionVerif() | P2.winConditionVerif() | P2.looseConditionVerif());
}

void Board::BeginPhase(){
    (*activeP).setNormalSummon(true);
    (*activeP).draw();
    (*activeP).setSmoke((*activeP).getSmoke() + SMOKE_GAIN_ON_TURN);
    return;
}

void Board::EndPhase(){
    return;
}

void Board::passTurn(){
    if(activeP == &P1) activeP = &P2;
    else if(activeP == &P2) activeP = &P1;
    else activeP = &P1;
    return;
}

void Board::timerReset(){
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
    return;
}

std::ostream& operator<<(std::ostream& os, Board& b){
    os << *(b.getP1()) << *(b.getP2()) << std::endl;
    return os;
}

void Board::operator=(Board& board){
    this->P1 = board.P1;
    this->P2 = board.P2;
    this->activeP = board.activeP;
    this->timeTurn = time(NULL);
    this->timeStartTurn = this->timeTurn;
    this->turn = board.turn;
    return;
}

void Board::initAttributes () {
    activeP = &P1;
    timeTurn = time(NULL);
    timeStartTurn = timeTurn;
    turn = 0;
    return;
}

