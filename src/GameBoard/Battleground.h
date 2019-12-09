
#ifndef BATTLEGROUND_H
#define BATTLEGROUND_H
#pragma once
#include "CardList.h"
#include "Card.h"

#include <string>
#include <vector>

class Battleground : public CardList
{
public:

		Battleground ();

		virtual ~Battleground ();

		void show ()
		{
		}

		// void setBuffs (vector<Buff*> new_var)		 {
		// 				buffs = new_var;
		// }

		// vector<Buff*> getBuffs ()		 {
		// 		return buffs;
		// }

private:

		// vector<Buff*> buffs;

		void initAttributes () ;

};

#endif // BATTLEGROUND_H
