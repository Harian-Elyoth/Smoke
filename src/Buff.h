
#ifndef BUFF_H
#define BUFF_H

#include <string>
#include <vector>



/**
  * class Buff
  * 
  */

class Buff
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Buff();

  /**
   * Empty Destructor
   */
  virtual ~Buff();

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

  int strength;
  int health;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of strength
   * @param new_var the new value of strength
   */
  void setStrength(int new_var)
  {
    strength = new_var;
  }

  /**
   * Get the value of strength
   * @return the value of strength
   */
  int getStrength()
  {
    return strength;
  }

  /**
   * Set the value of health
   * @param new_var the new value of health
   */
  void setHealth(int new_var)
  {
    health = new_var;
  }

  /**
   * Get the value of health
   * @return the value of health
   */
  int getHealth()
  {
    return health;
  }

  void initAttributes();

};

#endif // BUFF_H
