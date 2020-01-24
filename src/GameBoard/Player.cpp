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
    if(smoke >= SMOKE_WIN_CONDITION){
        std::cout << name << " has " << smoke <<  " smoke." << std::endl;
        return true;
    }
    return false;
}

bool Player::looseConditionVerif(){
    if(smoke <= SMOKE_LOOSE_CONDITION){
        std::cout << name << " has " << smoke <<  " smoke." << std::endl;
        return true;
    }
    if(deck.size() <= 0){
        std::cout << name << " has " << deck.size() <<  " cards in his deck." << std::endl;
        return true;
    }
    return false;
}

void Player::checkBattlegroundState(){
    std::vector<Card>::iterator it = battleground.begin();
    if(it == battleground.end()) return;
    Creature crea;
    while(it != battleground.end()){
        crea = static_cast<Creature&>(*it);
        std::cout << crea << std::endl;
        /*if(crea){
            if(crea->getHealth() <= 0){
                battleground.erase(it);
            }
        }*/
    it++;
    }
    return;
}

void Player::move(CardList* source, CardList* destination, std::vector<Card>::iterator it){
    source->erase(it);
    destination->add(it);
    return;
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

Card Player::draw(){
    Card cardDrawn;
    if(deck.isEmpty()) return cardDrawn;
    cardDrawn = deck.front();
    deck.erase(deck.begin());
    hand.add(cardDrawn);
    std::cout << "I draw!!!"<< std::endl;
    return cardDrawn;
}

Card Player::drawByName(std::string name){
    Card cardDrawn;
    if(deck.isEmpty()) return cardDrawn;
    std::vector<Card>::iterator it = deck.begin();
    while((!((*it).getName().compare(name))) && it < deck.end()) it++;
    if(it != deck.end()){
        cardDrawn = *it;
        deck.erase(it);
        hand.add(cardDrawn);
    }
    std::cout << "I draw, " << name << "!!!" << std::endl;
    return cardDrawn;
}

Card Player::summonCostOrLess(CardList& source, int cost){
    Card cardDrawn;
    if (source.isEmpty())
        return cardDrawn;
    std::vector<Card>::iterator it = source.begin();
    while ((*it).getCost() != cost && it < source.end())
        it++;
    if (it != source.end())
    {
        cardDrawn = *it;
        source.erase(it);
        battleground.add(cardDrawn);
    }
    std::cout << "I summon, " << cardDrawn.getName() << "!!!" << std::endl;
    return cardDrawn;
}

Card Player::summon(CardList* source, Card& card){
    Card cardPlayed;
    if(!cardExists(*source, card) || smoke < card.getCost()) return cardPlayed;
    cardPlayed = card;
    source->erase(cardToIterator(*source, card));
    battleground.add(cardPlayed);
    std::cout << "I summon, " << cardPlayed.getName() << "!!!" << std::endl;
    return cardPlayed;
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
    std::cout << "I draw!!!" << std::endl;
    return cardDrawn;
}

Card Player::discard(){
    Card cardDiscarded;
    if(hand.isEmpty()) return cardDiscarded;;
    cardDiscarded = hand.front();
    hand.erase(hand.begin());
    graveyard.add(cardDiscarded);
    std::cout << "I discard, " << cardDiscarded.getName() << "!!!" << std::endl;
    return cardDiscarded;
}

Card Player::discardCard(Card& card){
    Card cardDiscarded;
    if(!cardExists(hand, card)) return cardDiscarded;
    cardDiscarded = card;
    hand.erase(cardToIterator(hand, card));
    graveyard.add(cardDiscarded);
    std::cout << "I discard, " << cardDiscarded.getName() << "!!!" << std::endl;
    return cardDiscarded;
}

Card Player::burn(){
    Card cardBurned;
    if(deck.isEmpty()) return cardBurned;
    cardBurned = deck.front();
    deck.erase(deck.begin());
    graveyard.add(cardBurned);
    std::cout << "I burn, " << cardBurned.getName() << "!!!" << std::endl;
    return cardBurned;
}

Card Player::destroy(Card& card){
    Card cardDestroyed;
    if(!cardExists(battleground, card)) return cardDestroyed;
    cardDestroyed = card;
    battleground.erase(cardToIterator(battleground, card));
    graveyard.add(cardDestroyed);
    std::cout << "I destroy, " << cardDestroyed.getName() << "!!!" << std::endl;
    return cardDestroyed;
}

Card Player::exile(Card& card, CardList& zone){
    Card cardExiled;
    if(!cardExists(zone, card)) return cardExiled;
    cardExiled = card;
    zone.erase(cardToIterator(zone, card));
    std::cout << "I exile, " << cardExiled.getName() << "!!!" << std::endl;
    return cardExiled;
}

std::ostream& operator<<(std::ostream& os, Player& P){
    os << "-----------------------" << std::endl << "Player : " << P.getHero() << " alias " << P.getName() << " / Smoke :" << P.getSmoke() << std::endl << "Hand :" << std::endl << (*P.getHand()) << std::endl << "Deck :" << std::endl << (*P.getDeck()) << std::endl << "Graveyard :" << std::endl << (*P.getGraveyard()) << std::endl << "Battleground :" << std::endl << (*P.getBattleground()) << std::endl << "-----------------------" << std::endl;
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

