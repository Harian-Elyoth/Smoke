#include "CardList.h"

<<<<<<< HEAD
// Constructors/Destructors
//

CardList::~CardList () {
    cList.clear();
}

//  
// Methods
//  

void CardList::add(Card* card){
    cList.push_back(card);
}

void CardList::add(std::vector<Card*> cL){
    cList.insert(cList.end(), cL.begin(), cL.end());
}

// Other methods
// 
=======
CardList::~CardList () { }

void CardList::add(Card* card){
    cList.push_back(*card);
}
>>>>>>> BoardBranch

void CardList::add(std::vector<Card> &cL){
    cList.insert(cList.end(), cL.begin(), cL.end());
}