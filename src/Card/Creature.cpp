#include "Creature.h"

// Constructors/Destructors
//  

Creature::Creature () {
initAttributes();
}

Creature::~Creature () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Creature::initAttributes () {
		type = "Creature";
		AttackFlag = 0;
		BlockFlag = 0;
}

