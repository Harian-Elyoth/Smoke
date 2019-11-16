#pragma once
#include "Card.hh"

class CardList{

    public:
        Card getCard(int num);

    private:
        Card* hand;
        int handLen;

};