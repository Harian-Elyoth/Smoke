#include "Deck.h"

// Constructors/Destructors
//  

Deck::Deck(std::vector<Card*> cL){
    cList = cL;
}

Deck::Deck () {
    initAttributes();
}

Deck::~Deck () { }

//  
// Methods
//  

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
}

// Accessor methods
//  


// Other methods
//  

void Deck::initAttributes () { }

