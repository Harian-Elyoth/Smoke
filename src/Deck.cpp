#include "Deck.h"

// Constructors/Destructors
//  

Deck::Deck()
{
  initAttributes();
}

Deck::~Deck()
{
}

//  
// Methods
//  

void Deck::shuffle(){
  auto rng = std::default_random_engine {};
  shuffle(cList.begin(), std::end(cards_), rng);
}

// Accessor methods
//  


// Other methods
//  

void Deck::initAttributes()
{
}

