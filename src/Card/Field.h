
#ifndef FIELD_H
#define FIELD_H
#include "Card.h"

#include <string>
class Field : virtual public Card
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Field ();

		/**
		 * Empty Destructor
		 */
		virtual ~Field ();


protected:

public:

protected:

public:

protected:


private:

		// Static Private attributes
		//  

		static std::string type;
public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of type
		 * @param new_var the new value of type
		 */
		void setType (std::string new_var)		 {
						Field::type = new_var;
		}

		/**
		 * Get the value of type
		 * @return the value of type
		 */
		std::string getType ()		 {
				return Field::type;
		}
private:

public:

private:


		void initAttributes () ;

};

#endif // FIELD_H
