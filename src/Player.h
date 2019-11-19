
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

/**
  * class Player
  * 
  */

class Player
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Player();

  /**
   * Empty Destructor
   */
  virtual ~Player();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

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

  // 		
  std::string name;
  int smoke;
  Hand hand;
  Graveyard graveyard;
  Deck deck;
  Battleground battleground;
  std::string hero;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * 
   * @param new_var the new value of name
   */
  void setName(std::string new_var)
  {
    name = new_var;
  }

  /**
   * Get the value of name
   * 
   * @return the value of name
   */
  std::string getName()
  {
    return name;
  }

  /**
   * Set the value of smoke
   * @param new_var the new value of smoke
   */
  void setSmoke(int new_var)
  {
    smoke = new_var;
  }

  /**
   * Get the value of smoke
   * @return the value of smoke
   */
  int getSmoke()
  {
    return smoke;
  }

  /**
   * Set the value of hand
   * @param new_var the new value of hand
   */
  void setHand(Hand new_var)
  {
    hand = new_var;
  }

  /**
   * Get the value of hand
   * @return the value of hand
   */
  Hand getHand()
  {
    return hand;
  }

  /**
   * Set the value of graveyard
   * @param new_var the new value of graveyard
   */
  void setGraveyard(Graveyard new_var)
  {
    graveyard = new_var;
  }

  /**
   * Get the value of graveyard
   * @return the value of graveyard
   */
  Graveyard getGraveyard()
  {
    return graveyard;
  }

  /**
   * Set the value of deck
   * @param new_var the new value of deck
   */
  void setDeck(Deck new_var)
  {
    deck = new_var;
  }

  /**
   * Get the value of deck
   * @return the value of deck
   */
  Deck getDeck()
  {
    return deck;
  }

  /**
   * Set the value of battleground
   * @param new_var the new value of battleground
   */
  void setBattleground(Battleground new_var)
  {
    battleground = new_var;
  }

  /**
   * Get the value of battleground
   * @return the value of battleground
   */
  Battleground getBattleground()
  {
    return battleground;
  }

  /**
   * Set the value of hero
   * @param new_var the new value of hero
   */
  void setHero(std::string new_var)
  {
    hero = new_var;
  }

  /**
   * Get the value of hero
   * @return the value of hero
   */
  std::string getHero()
  {
    return hero;
  }

  void initAttributes();

};

#endif // PLAYER_H
