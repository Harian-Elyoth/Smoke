
#ifndef BATTLECRY_H
#define BATTLECRY_H
#include "Board.h"

#include <string>

/**
  * class Battlecry
  * 
  */

class Battlecry
{
public:

		virtual void battlecryEffect (Board gBoard) = 0;

};

#endif // BATTLECRY_H
