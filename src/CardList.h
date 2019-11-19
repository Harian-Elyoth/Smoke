
#ifndef CARDLIST_H
#define CARDLIST_H
#include "Card.h"

#include <string>
#include <vector>

using namespace std;

/**
  * class CardList
  * 
  */

class CardList
{
public:
  // Constructors/Destructors
  //  

  CardList(vector<Card*> cL):cList(cL){}

  /**
   * Empty Constructor
   */
  CardList();

  /**
   * Empty Destructor
   */
  virtual ~CardList();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  card
   */
  void add(Card* card)
  {
  }


  /**
   * @param  cList
   */
  void add(vector<Card*> cL)
  {
  }


  /**
   */
  virtual void show() = 0;


  /**
   * @param  card
   */
  void play(Card* card)
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

  vector<Card*> cList;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of cList
   * @param new_var the new value of cList
   */
  void setCList(vector<Card*> new_var)
  {
    cList = new_var;
  }

  /**
   * Get the value of cList
   * @return the value of cList
   */
  vector<Card*> getCList()
  {
    return cList;
  }

  void initAttributes();

};

#endif // CARDLIST_H
