
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

/**
  * class Player
  * 
  */

class Player
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		Player ();

		/**
		 * Empty Destructor
		 */
		virtual ~Player ();

		// Static Public attributes
		//  

		// Public attributes
		//  


		// Public attribute accessor methods
		//  


		// Public attribute accessor methods
		//  



		/**
		 * @param  card
		 */
		void play (Card* card)
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

		// 		
		std::string name;
		int smoke;
		Hand hand;
		Graveyard graveyard;
		Deck deck;
		Battleground battleground;
		std::string hero;
		bool normalSummon;
		bool fullBoard;
public:


		// Private attribute accessor methods
		//  

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of name
		 * 
		 * @param new_var the new value of name
		 */
		void setName (std::string new_var)		 {
						name = new_var;
		}

		/**
		 * Get the value of name
		 * 
		 * @return the value of name
		 */
		std::string getName ()		 {
				return name;
		}

		/**
		 * Set the value of smoke
		 * @param new_var the new value of smoke
		 */
		void setSmoke (int new_var)		 {
						smoke = new_var;
		}

		/**
		 * Get the value of smoke
		 * @return the value of smoke
		 */
		int getSmoke ()		 {
				return smoke;
		}

		/**
		 * Set the value of hand
		 * @param new_var the new value of hand
		 */
		void setHand (Hand new_var)		 {
						hand = new_var;
		}

		/**
		 * Get the value of hand
		 * @return the value of hand
		 */
		Hand getHand ()		 {
				return hand;
		}

		/**
		 * Set the value of graveyard
		 * @param new_var the new value of graveyard
		 */
		void setGraveyard (Graveyard new_var)		 {
						graveyard = new_var;
		}

		/**
		 * Get the value of graveyard
		 * @return the value of graveyard
		 */
		Graveyard getGraveyard ()		 {
				return graveyard;
		}

		/**
		 * Set the value of deck
		 * @param new_var the new value of deck
		 */
		void setDeck (Deck new_var)		 {
						deck = new_var;
		}

		/**
		 * Get the value of deck
		 * @return the value of deck
		 */
		Deck getDeck ()		 {
				return deck;
		}

		/**
		 * Set the value of battleground
		 * @param new_var the new value of battleground
		 */
		void setBattleground (Battleground new_var)		 {
						battleground = new_var;
		}

		/**
		 * Get the value of battleground
		 * @return the value of battleground
		 */
		Battleground getBattleground ()		 {
				return battleground;
		}

		/**
		 * Set the value of hero
		 * @param new_var the new value of hero
		 */
		void setHero (std::string new_var)		 {
						hero = new_var;
		}

		/**
		 * Get the value of hero
		 * @return the value of hero
		 */
		std::string getHero ()		 {
				return hero;
		}

		/**
		 * Set the value of normalSummon
		 * @param new_var the new value of normalSummon
		 */
		void setNormalSummon (bool new_var)		 {
						normalSummon = new_var;
		}

		/**
		 * Get the value of normalSummon
		 * @return the value of normalSummon
		 */
		bool getNormalSummon ()		 {
				return normalSummon;
		}

		/**
		 * Set the value of fullBoard
		 * @param new_var the new value of fullBoard
		 */
		void setFullBoard (bool new_var)		 {
						fullBoard = new_var;
		}

		/**
		 * Get the value of fullBoard
		 * @return the value of fullBoard
		 */
		bool getFullBoard ()		 {
				return fullBoard;
		}
private:


		void initAttributes () ;

};

#endif // PLAYER_H
