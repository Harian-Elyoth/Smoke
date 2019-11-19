
#ifndef SPELL_H
#define SPELL_H
#include "Card.h"
#include "Card.h"

#include <string>

/**
  * class Spell
  * 
  */

class Spell : virtual public Card, virtual public Card
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Spell();

  /**
   * Empty Destructor
   */
  virtual ~Spell();

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

  static std::string type;
  // Private attributes
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType(std::string new_var)
  {
    Spell::type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  std::string getType()
  {
    return Spell::type;
  }

  // Private attribute accessor methods
  //  


  void initAttributes();

};

#endif // SPELL_H
