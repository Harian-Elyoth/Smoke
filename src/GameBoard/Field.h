
#ifndef FIELD_H
#define FIELD_H
#include "Card.h"

#include <string>

/**
  * class Field
  * 
  */

class Field : virtual public Card
{
public:

        Field ();

        virtual ~Field ();

        void effect () {}

        std::string toString () {return "FIELD";}

        void setType (std::string new_var) {Field::type = new_var;}

        std::string getType () {return Field::type;}

protected:

        // static std::string type;

		void initAttributes () ;

};

#endif // FIELD_H
