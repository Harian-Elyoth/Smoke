#pragma once
#include "Card.hh"
#include <list>
#include <string>
using namespace std;

class CardList{

    public:
        CardList(list <Card*> list);
        int getLen(){return l.size();}
        void shuffle();
        void add(Card *c);
        void add(list <Card*> cList);
        Card* draw();
        Card* getCard();
        Card* getCardNb(int num);
        Card* getCardName(string nom);
        Card* getCardCost(int cost);
        Card* getCardTribe(string tribe);

    private:
        list <Card*> l;

};