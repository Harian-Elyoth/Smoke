
#ifndef BOARD_H
#define BOARD_H

#include <string>
class Board
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Board ();

		/**
		 * Empty Destructor
		 */
		virtual ~Board ();


protected:

public:

protected:

public:

protected:


private:

		// Private attributes
		//  

		Player J1;
		Player J2;
public:

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of J1
		 * @param new_var the new value of J1
		 */
		void setJ1 (Player new_var)		 {
						J1 = new_var;
		}

		/**
		 * Get the value of J1
		 * @return the value of J1
		 */
		Player getJ1 ()		 {
				return J1;
		}

		/**
		 * Set the value of J2
		 * @param new_var the new value of J2
		 */
		void setJ2 (Player new_var)		 {
						J2 = new_var;
		}

		/**
		 * Get the value of J2
		 * @return the value of J2
		 */
		Player getJ2 ()		 {
				return J2;
		}
private:


		void initAttributes () ;

};

#endif // BOARD_H
