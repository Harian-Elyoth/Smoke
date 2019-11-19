
#ifndef CARDLIST_H
#define CARDLIST_H

#include <string>
#include <vector>


class CardList
{
public:

		// Constructors/Destructors
		//  


		/**
		 * Empty Constructor
		 */
		CardList ();

		/**
		 * Empty Destructor
		 */
		virtual ~CardList ();



		/**
		 */
		void shuffle ()
		{
		}


		/**
		 * @param  c
		 */
		void add (undef c)
		{
		}


		/**
		 * @param  cList
		 */
		void add (list <Card*> cList)
		{
		}


		/**
		 * @return Card*
		 */
		Card* draw ()
		{
		}

protected:

public:

protected:

public:

protected:


private:

		// Private attributes
		//  

		int length;
public:

private:

public:


		// Private attribute accessor methods
		//  


		/**
		 * Set the value of length
		 * @param new_var the new value of length
		 */
		void setLength (int new_var)		 {
						length = new_var;
		}

		/**
		 * Get the value of length
		 * @return the value of length
		 */
		int getLength ()		 {
				return length;
		}
private:


		void initAttributes () ;

};

#endif // CARDLIST_H
