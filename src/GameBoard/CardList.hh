#pragma once
#include "Card.hh"

class CardList{

    public:
        CardList(Card* list, int listLen);
        Card getCard(int num);

    private:
        Card* hand;
        int handLen;

};