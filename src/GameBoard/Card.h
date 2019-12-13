
#ifndef CARD_H
#define CARD_H
#pragma once

#include <sstream>
#include <string>
#include <vector>

class Card
{
public:

		//////////////////////////////////
		//  Constructors et Destructor  //
		//////////////////////////////////
		
		Card ();

		Card(int c, std::string n, int id, std::string tr, std::string ty);

		virtual ~Card ();

		////////////////////////////
		//  Setters and guetters  //
		////////////////////////////

		void setCost (int new_var){cost = new_var;}

		int getCost (){return cost;}

		void setName (std::string new_var){name = new_var;}

		std::string getName (){return name;}

		void setOwner (int id){owner = id;}

		int getOwner (){return owner;}

		void setTribe (std::string new_var){ tribe = new_var;}

		std::string getTribe (){return tribe;}

		void setType (std::string new_var){type = new_var;}

		std::string getType (){return type;}

		// void setBuffs (vector<Buff*> new_var){buffs = new_var;}

		// vector<Buff*> getBuffs (){return buffs;}

		///////////////////////
		//  Other fonctions  //
		///////////////////////

		friend std::ostream& operator<<(std::ostream& os, const Card& c);

		bool operator!=(const Card& c);

		bool operator==(const Card& c);

private:

		int cost;
		std::string name;
		int owner;
		std::string tribe;
		std::string type;
		// vector<Buff*> buffs;

		void initAttributes () ;

};

#endif // CARD_H
