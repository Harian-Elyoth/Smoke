
#ifndef SPELL_H
#define SPELL_H
#include "Card.h"

#include <string>
class Spell : virtual public Card
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Spell ();

		/**
		 * Empty Destructor
		 */
		virtual ~Spell ();


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
						Spell::type = new_var;
		}

		/**
		 * Get the value of type
		 * @return the value of type
		 */
		std::string getType ()		 {
				return Spell::type;
		}
private:

public:

private:


		void initAttributes () ;

};

#endif // SPELL_H
