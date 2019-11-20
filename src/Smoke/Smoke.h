
#ifndef SMOKE_H
#define SMOKE_H

#include <string>

/**
  * class Smoke
  * 
  */

class Smoke
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Smoke ();

		/**
		 * Empty Destructor
		 */
		virtual ~Smoke ();

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
		void turn ()
		{
		}


		/**
		 * @return int
		 */
		int main ()
		{
		}


		/**
		 */
		void drawPhase ()
		{
		}


		/**
		 */
		void mainPhase1 ()
		{
		}


		/**
		 */
		void battlePhase ()
		{
		}


		/**
		 */
		void mainPhase2 ()
		{
		}


		/**
		 */
		void endPhase ()
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

		Board board;
		bool PlayerTurn;
public:


		// Private attribute accessor methods
		//  

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of board
		 * @param new_var the new value of board
		 */
		void setBoard (Board new_var)		 {
						board = new_var;
		}

		/**
		 * Get the value of board
		 * @return the value of board
		 */
		Board getBoard ()		 {
				return board;
		}

		/**
		 * Set the value of PlayerTurn
		 * @param new_var the new value of PlayerTurn
		 */
		void setPlayerTurn (bool new_var)		 {
						PlayerTurn = new_var;
		}

		/**
		 * Get the value of PlayerTurn
		 * @return the value of PlayerTurn
		 */
		bool getPlayerTurn ()		 {
				return PlayerTurn;
		}
private:


		void initAttributes () ;

};

#endif // SMOKE_H
