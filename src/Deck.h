
#ifndef DECK_H
#define DECK_H
#include "CardList.h"

#include <string>
#include <vector>

#include <algorithm>
#include <random>

/**
  * class Deck
  * 
  */

class Deck : public CardList
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Deck();

  /**
   * Empty Destructor
   */
  virtual ~Deck();

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
   */
  void shuffle()
  {
  }

  /**
   * @param  card
   */
  void burn(Card* card)
  {
  }


  /**
   * @return Card*
   */
  Card* draw()
  {
  }


  /**
   * @return Card*
   * @param  cost
   */
  Card* drawCost(int cost)
  {
  }


  /**
   * @return Card*
   * @param  name
   */
  Card* drawName(std::string name)
  {
  }


  /**
   * @return Card*
   * @param  tribe
   */
  Card* drawTribe(std::string tribe)
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

  std::string tribe1;
  std::string tribe2;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of tribe1
   * @param new_var the new value of tribe1
   */
  void setTribe1(std::string new_var)
  {
    tribe1 = new_var;
  }

  /**
   * Get the value of tribe1
   * @return the value of tribe1
   */
  std::string getTribe1()
  {
    return tribe1;
  }

  /**
   * Set the value of tribe2
   * @param new_var the new value of tribe2
   */
  void setTribe2(std::string new_var)
  {
    tribe2 = new_var;
  }

  /**
   * Get the value of tribe2
   * @return the value of tribe2
   */
  std::string getTribe2()
  {
    return tribe2;
  }

  void initAttributes();

};

#endif // DECK_H
