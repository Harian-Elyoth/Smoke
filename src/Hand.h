
#ifndef HAND_H
#define HAND_H
#include "CardList.h"

#include <string>

/**
  * class Hand
  * 
  */

class Hand : public CardList
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Hand();

  /**
   * Empty Destructor
   */
  virtual ~Hand();

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
   * @param  card
   */
  void discard(Card* card)
  {
  }


  /**
   * @param  card
   */
  void burn(Card* card)
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

#endif // HAND_H
