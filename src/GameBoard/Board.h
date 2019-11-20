
#ifndef BOARD_H
#define BOARD_H

#include <string>

/**
  * class Board
  * 
  */

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
		void options ()
		{
		}


		/**
		 */
		void passTurn ()
		{
		}


		/**
		 */
		void timer ()
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

		// Private attributes
		//  

		Player P1;
		Player P2;
		undef time;
		int turns;
public:


		// Private attribute accessor methods
		//  

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of P1
		 * @param new_var the new value of P1
		 */
		void setP1 (Player new_var)		 {
						P1 = new_var;
		}

		/**
		 * Get the value of P1
		 * @return the value of P1
		 */
		Player getP1 ()		 {
				return P1;
		}

		/**
		 * Set the value of P2
		 * @param new_var the new value of P2
		 */
		void setP2 (Player new_var)		 {
						P2 = new_var;
		}

		/**
		 * Get the value of P2
		 * @return the value of P2
		 */
		Player getP2 ()		 {
				return P2;
		}

		/**
		 * Set the value of time
		 * @param new_var the new value of time
		 */
		void setTime (undef new_var)		 {
						time = new_var;
		}

		/**
		 * Get the value of time
		 * @return the value of time
		 */
		undef getTime ()		 {
				return time;
		}

		/**
		 * Set the value of turns
		 * @param new_var the new value of turns
		 */
		void setTurns (int new_var)		 {
						turns = new_var;
		}

		/**
		 * Get the value of turns
		 * @return the value of turns
		 */
		int getTurns ()		 {
				return turns;
		}
private:



		/**
		 */
		void resetTurnTimer ()
		{
		}


		/**
		 */
		void nextTurn ()
		{
		}

		void initAttributes () ;

};

#endif // BOARD_H
