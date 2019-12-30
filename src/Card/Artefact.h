
#ifndef ARTEFACT_H
#define ARTEFACT_H
#include "Card.h"
#include "Card.h"
#include "Card.h"

#include <string>

/**
  * class Artefact
  * 
  */

class Artefact : virtual public Card, virtual public Card, virtual public Card
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Artefact ();

		/**
		 * Empty Destructor
		 */
		virtual ~Artefact ();

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
		void effect ()
		{
		}


		/**
		 * @return std::string
		 */
		std::string toString ()
		{
		}

protected:

		// Static Protected attributes
		//  

		// Protected attributes
		//  

public:


		// Protected attribute accessor methods
		//  

protected:

public:


		// Protected attribute accessor methods
		//  

protected:


private:

		// Static Private attributes
		//  

		static std::string type;
		// Private attributes
		//  

		Creature stuffed;
public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of type
		 * @param new_var the new value of type
		 */
		void setType (std::string new_var)		 {
						Artefact::type = new_var;
		}

		/**
		 * Get the value of type
		 * @return the value of type
		 */
		std::string getType ()		 {
				return Artefact::type;
		}
private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of stuffed
		 * @param new_var the new value of stuffed
		 */
		void setStuffed (Creature new_var)		 {
						stuffed = new_var;
		}

		/**
		 * Get the value of stuffed
		 * @return the value of stuffed
		 */
		Creature getStuffed ()		 {
				return stuffed;
		}
private:


		void initAttributes () ;

};

#endif // ARTEFACT_H
