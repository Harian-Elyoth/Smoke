#include "Deck.h"
#include <iostream>

Deck::Deck(std::vector<Card*> cL){
    cList = cL;
}

Deck::Deck () {
    initAttributes();
}

Deck::~Deck () {
    // for(Card* it : cList) delete[] it;
    cList.clear();
}

Card* Deck::draw(){
    Card *c = &cList.front();
    cList.erase(cList.begin());
    return c;
}

<<<<<<< HEAD
void Deck::shuffle(){
    auto rng = std::default_random_engine {};
    std::shuffle(cList.begin(), cList.end(), rng);
}

Card* Deck::burn(){
    draw();
}

Card* Deck::draw(){
    Card* c = cList.front();
    cList.erase(cList.begin());
    return c;
=======
Card* Deck::drawCost(int cost){
    std::vector<Card>::iterator it;
    for(it = cList.begin(); it < cList.end(); it++){
        if((*it).getCost() == cost) break;
    }
    cList.erase(it);
    return &(*it);
>>>>>>> BoardBranch
}

Card* Deck::drawTribe(std::string tribe){
    std::vector<Card>::iterator it;
    for(it = cList.begin(); it < cList.end(); it++){
        if((*it).getTribe() == tribe) break;
    }
    cList.erase(it);
    return &(*it);
}

Card* Deck::drawName(std::string name){
    std::vector<Card>::iterator it;
    for(it = cList.begin(); it < cList.end(); it++){
        if((*it).getName() == name) break;
    }
    cList.erase(it);
    return &(*it);
}

std::ostream& operator<<(std::ostream& os, const Deck& d){
    int size = d.getCList().size();
    os << "Deck : " << size << std::endl;
    for(int i = 0; i < size; i++)os << d.getCList()[i];
    return os;
}

<<<<<<< HEAD
void Deck::initAttributes () { }
=======
void Deck::initAttributes () {
    cList.clear();
    return;
}
>>>>>>> BoardBranch

