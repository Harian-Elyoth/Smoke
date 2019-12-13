#include "Player.h"

int Player::id = 0;

Player::Player () {
    initAttributes();
}

Player::Player(std::string n, CardList &d, std::string h):
name(n), deck(d), hero(h) {
    id++;
    smoke = SMOKE_START;
    normalSummon = false;
    fullBoard = false;
}

Player::Player(std::string n, std::string h):
name(n), hero(h) {
    smoke = SMOKE_START;
    normalSummon = false;
    fullBoard = false;
}

Player::~Player () {}

bool Player::winConditionVerif(){
    if(smoke >= SMOKE_WIN_CONDITION) return true;
    return false;
}

bool Player::looseConditionVerif(){
    if(smoke <= SMOKE_LOOSE_CONDITION) return true;
    if(deck.size() <= 0) return true;
    return false;
}

bool Player::cardExists(CardList& cL, Card& card){
    std::vector<Card>::iterator it = cL.begin();
    if(it == cL.end()) return false;
    while(*(it) != card){
        it++;
        if(it == cL.end()) return false;
    }
    return true;
}

std::vector<Card>::iterator Player::cardToIterator(CardList& cL, Card& card){
    std::vector<Card>::iterator it = cL.begin();
    if(it == cL.end()) return it;
    while(*(it) != card){
        it++;
        if(it == cL.end()) return it;
    }
    return it;
}

Card Player::play(Card& card){
    Card cardPlayed;
    if(!cardExists(hand, card)) return cardPlayed;
    cardPlayed = card;
    hand.erase(cardToIterator(hand, card));
    smoke -= card.getCost();
    battleground.add(cardPlayed);
    return cardPlayed;
}

Card Player::draw(){
    Card cardDrawn;
    if(deck.isEmpty()) return cardDrawn;
    cardDrawn = deck.front();
    deck.erase(deck.begin());
    hand.add(cardDrawn);
    return cardDrawn;
}

Card Player::drawCost(int cost){
    Card cardDrawn;
    if(deck.isEmpty()) return cardDrawn;
    std::vector<Card>::iterator it = deck.begin();
    while((*it).getCost() != cost && it < deck.end()) it++;
    if(it != deck.end()){
        cardDrawn = *it;
        deck.erase(it);
        hand.add(cardDrawn);
    }
    return cardDrawn;
}

Card Player::discard(){
    Card cardDiscarded;
    if(hand.isEmpty()) return cardDiscarded;;
    cardDiscarded = hand.front();
    hand.erase(hand.begin());
    graveyard.add(cardDiscarded);
    return cardDiscarded;
}

Card Player::burn(){
    Card cardBurned;
    if(deck.isEmpty()) return cardBurned;
    cardBurned = deck.front();
    deck.erase(deck.begin());
    graveyard.add(cardBurned);
    return cardBurned;
}

Card Player::destroy(Card& card){
    Card cardDestroyed;
    if(!cardExists(battleground, card)) return cardDestroyed;
    cardDestroyed = card;
    battleground.erase(cardToIterator(battleground, card));
    graveyard.add(cardDestroyed);
    return cardDestroyed;
}

Card Player::exile(Card& card, CardList& zone){
    Card cardExiled;
    if(!cardExists(zone, card)) return cardExiled;
    cardExiled = card;
    zone.erase(cardToIterator(zone, card));
    return cardExiled;
}

std::ostream& operator<<(std::ostream& os, Player& P){
    os << "-----------------------" << std::endl << "Player : " << P.getHero() << " alias " << P.getName() << std::endl << "Hand :" << std::endl << (*P.getHand()) << std::endl << "Deck :" << std::endl << (*P.getDeck()) << std::endl << "Graveyard :" << std::endl << (*P.getGraveyard()) << std::endl << "Battleground :" << std::endl << (*P.getBattleground()) << std::endl << "-----------------------" << std::endl;
    return os;
}

void Player::operator=(Player& P){
    this->id = P.id;
    this->name = P.name;
    this->smoke = P.smoke;
    this->hand = P.hand;
    this->graveyard = P.graveyard;
    this->deck = P.deck;
    this->battleground = P.battleground;
    this->hero = P.hero;
    this->normalSummon = P.normalSummon;
    this->fullBoard = P.fullBoard;
    return;
}

void Player::initAttributes () {
    id++;
    name = "ERROR";
    smoke = 0;
    hero = "ERROR";
    normalSummon = false;
    fullBoard = false;
}

