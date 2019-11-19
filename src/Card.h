
#ifndef CARD_H
#define CARD_H
#include "Creature.h"
#include "Creature.h"
#include "Artefact.h"
#include "Spell.h"
#include "Field.h"

#include <string>
#include <vector>



/**
  * class Card
  * 
  */

class Card : public Creature, public Creature, public Artefact, public Spell, public Field
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Card();

  /**
   * Empty Destructor
   */
  virtual ~Card();

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
  virtual void effect() = 0;


  /**
   * @return std::string
   */
  virtual std::string toString() = 0;

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

  int cost;
  std::string name;
  Player owner;
  std::string tribe;
  std::string type;
  vector<Buff*> buffs;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of cost
   * @param new_var the new value of cost
   */
  void setCost(int new_var)
  {
    cost = new_var;
  }

  /**
   * Get the value of cost
   * @return the value of cost
   */
  int getCost()
  {
    return cost;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName(std::string new_var)
  {
    name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  std::string getName()
  {
    return name;
  }

  /**
   * Set the value of owner
   * @param new_var the new value of owner
   */
  void setOwner(Player new_var)
  {
    owner = new_var;
  }

  /**
   * Get the value of owner
   * @return the value of owner
   */
  Player getOwner()
  {
    return owner;
  }

  /**
   * Set the value of tribe
   * @param new_var the new value of tribe
   */
  void setTribe(std::string new_var)
  {
    tribe = new_var;
  }

  /**
   * Get the value of tribe
   * @return the value of tribe
   */
  std::string getTribe()
  {
    return tribe;
  }

  /**
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType(std::string new_var)
  {
    type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  std::string getType()
  {
    return type;
  }

  /**
   * Set the value of buffs
   * @param new_var the new value of buffs
   */
  void setBuffs(vector<Buff*> new_var)
  {
    buffs = new_var;
  }

  /**
   * Get the value of buffs
   * @return the value of buffs
   */
  vector<Buff*> getBuffs()
  {
    return buffs;
  }

  void initAttributes();

};

#endif // CARD_H
