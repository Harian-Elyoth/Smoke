
#ifndef GRAVEYARD_H
#define GRAVEYARD_H
#include "CardList.h"
#include "CardList.h"

#include <string>

/**
  * class Graveyard
  * 
  */

class Graveyard : public CardList, public CardList
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Graveyard();

  /**
   * Empty Destructor
   */
  virtual ~Graveyard();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void show()
  {
  }


  /**
   * @return Card*
   * @param  card
   */
  Card* getCard(Card* card)
  {
  }


  /**
   * @param  card
   */
  void exile(Card* card)
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  


  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //

};

#endif // GRAVEYARD_H
