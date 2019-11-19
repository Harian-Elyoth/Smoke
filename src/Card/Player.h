
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
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


protected:

public:

protected:

public:

protected:


private:

		// Private attributes
		//  

		// 		
		std::string name;
		int smoke;
		CardList hand;
		CardList discard;
		CardList deck;
		CardList battleground;
public:

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
		void setHand (CardList new_var)		 {
						hand = new_var;
		}

		/**
		 * Get the value of hand
		 * @return the value of hand
		 */
		CardList getHand ()		 {
				return hand;
		}

		/**
		 * Set the value of discard
		 * @param new_var the new value of discard
		 */
		void setDiscard (CardList new_var)		 {
						discard = new_var;
		}

		/**
		 * Get the value of discard
		 * @return the value of discard
		 */
		CardList getDiscard ()		 {
				return discard;
		}

		/**
		 * Set the value of deck
		 * @param new_var the new value of deck
		 */
		void setDeck (CardList new_var)		 {
						deck = new_var;
		}

		/**
		 * Get the value of deck
		 * @return the value of deck
		 */
		CardList getDeck ()		 {
				return deck;
		}

		/**
		 * Set the value of battleground
		 * @param new_var the new value of battleground
		 */
		void setBattleground (CardList new_var)		 {
						battleground = new_var;
		}

		/**
		 * Get the value of battleground
		 * @return the value of battleground
		 */
		CardList getBattleground ()		 {
				return battleground;
		}
private:


		void initAttributes () ;

};

#endif // PLAYER_H
