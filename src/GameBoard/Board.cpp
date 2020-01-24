#include "Board.h"

Board::Board () {
    initAttributes();
}

Board::~Board () { }

bool Board::cardExists(CardList& cL, Card& card){
    std::vector<Card>::iterator it = cL.begin();
    if(it == cL.end()) return false;
    while(*(it) != card){
        it++;
        if(it == cL.end()) return false;
    }
    return true;
}

std::vector<Card>::iterator Board::cardToIterator(CardList& cL, Card& card){
    std::vector<Card>::iterator it = cL.begin();
    if(it == cL.end()) return it;
    while(*(it) != card){
        it++;
        if(it == cL.end()) return it;
    }
    return it;
}

Card Board::play(Card& card){
    Player* P;
    if(card.getOwner() == P1.getId()) P = &P1;
    else P = &P2;
    Card cardPlayed;
    if(!cardExists(*P->getHand(), card) || P->getSmoke() < card.getCost()) return cardPlayed;
    cardPlayed = card;
    P->getHand()->erase(cardToIterator(*P->getHand(), card));
    P->setSmoke(P->getSmoke()-card.getCost());
    P->getBattleground()->add(cardPlayed);
    std::string className = cardPlayed.getName();

    std::cout << "I play, " << className << "!!!" << std::endl;
    
    if(className.compare("SteamCat") == 0){
        battlecrySteamCat(this, &card);
    }
    else if(className.compare("SteamBoiler") == 0){
        battlecrySteamBoiler(this, &card);
    }
    else if(className.compare("SteamGear") == 0){
        battlecrySteamGear(this, &card);
    }

    return cardPlayed;
}

bool Board::verifGameEnd(){
    return (P1.winConditionVerif() || P1.looseConditionVerif() || P2.winConditionVerif() || P2.looseConditionVerif());
}

void Board::BeginPhase(){
    std::cout << "Start of the Begin Phase" << std::endl;
    (*activeP).setNormalSummon(true);
    (*activeP).draw();
    (*activeP).setSmoke((*activeP).getSmoke() + SMOKE_GAIN_ON_TURN);
    return;
}

void Board::MainPhase(){
    std::cout << "Start of the Main Phase" << std::endl;
    play((*P1.getHand())[0]);
    return;
}

void Board::CombatPhase(){

}

void Board::EndPhase(){
    return;
}

void Board::CheckBattlegroundsState(){
    P1.checkBattlegroundState();
    P2.checkBattlegroundState();
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
    os << *(b.getP1()) << *(b.getP2());
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

/////////////////////
///  Battlecries  ///
/////////////////////

void battlecrySteamCat(Board* gBoard, Card* card){
    gBoard->getPlayerById(card->getOwner())->draw();
}

void battlecrySteamBoiler(Board* gBoard, Card* card){
    Player * p = gBoard->getPlayerById(card->getOwner());
    Card cardDrawn;
    cardDrawn = p->draw();
    if(cardDrawn.getType() == CREATURE){
        p->summon(p->getHand(), cardDrawn);
    }
    else {
        p->discardCard(cardDrawn);
    }
}

void battlecrySteamGear(Board* gBoard, Card *card)
    {
        gBoard->getPlayerById(card->getOwner())->gainSmoke(2);
        if(!(STEAMCORE == gBoard->getField()->getName())){
            gBoard->getPlayerById(card->getOwner())->gainSmoke(3);
        }
    }

//////////////////////
///  Deathrattles  ///
//////////////////////

void deathrattleSteamCat(Board* gBoard, Card* card){
    gBoard->getPlayerById(card->getOwner())->summonCostOrLess(*(gBoard->getPlayerById(card->getOwner())->getDeck()), 2);
}
