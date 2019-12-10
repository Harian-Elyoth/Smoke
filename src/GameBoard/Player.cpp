#include "Player.h"
#include <iostream>

int Player::id = 0;

Player::Player () {
    initAttributes();
}

Player::Player(std::string n, CardList &d, std::string h):
name(n), deck(d), hero(h) {
    id++;
    smoke = 100;
    normalSummon = false;
    fullBoard = false;
}

Player::Player(std::string n, std::string h):
name(n), hero(h) {
    smoke = 100;
    normalSummon = false;
    fullBoard = false;
}

Player::~Player () {}

Card Player::play(Card& card){
    Card cardPlayed;
    std::vector<Card>::iterator it = hand.begin();
    while(*(it) != card){
        it++;
        if(it == hand.end()) break;
    }
    if(it == hand.end()) return cardPlayed;
    cardPlayed = card;
    hand.erase(it);
    battleground.add(cardPlayed);
    return cardPlayed;
}

Card Player::emptyDeck(){
    Card emptyCard;
    return emptyCard;
}

Card Player::draw(){
    if(deck.isEmpty()) return emptyDeck();
    Card cardDrawn;
    cardDrawn = deck.front();
    deck.erase(deck.begin());
    hand.add(cardDrawn);
    return cardDrawn;
}

Card Player::drawCost(int cost){
    if(deck.isEmpty()) return emptyDeck();
    Card cardDrawn;
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

