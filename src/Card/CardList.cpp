#include "CardList.h"

// Constructors/Destructors
//  

CardList::CardList()
{
  initAttributes();
}

CardList::~CardList()
{
  cList.clear();
}

//  
// Methods
//  

void CardList::add(Card* c){
  cList.push_back(c);
}

void CardList::add(vector<Card*> cL){
  cList.insert(cList.end(), cL.begin(), cL.end());
}

void CardList::play(Card *c){
  vector<Card*>::iterator it = cList.begin();
  while(*it != c) it++;
  cList.erase(it);
}

// Accessor methods
//  


// Other methods
//  

void CardList::initAttributes()
{
  cList.clear();
}

