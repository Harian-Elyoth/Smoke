
#ifndef FIELD_H
#define FIELD_H
#include "Card.h"
#include "Card.h"
#include "Card.h"

#include <string>

/**
  * class Field
  * 
  */

class Field : virtual public Card, virtual public Card, virtual public Card
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Field();

  /**
   * Empty Destructor
   */
  virtual ~Field();

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
    Field::type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  std::string getType()
  {
    return Field::type;
  }

  // Private attribute accessor methods
  //  


  void initAttributes();

};

#endif // FIELD_H
