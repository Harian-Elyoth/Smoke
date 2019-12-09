#include "CardList.h"

CardList::~CardList () { }

void CardList::add(Card* card){
    cList.push_back(*card);
}

void CardList::add(std::vector<Card> &cL){
    cList.insert(cList.end(), cL.begin(), cL.end());
}