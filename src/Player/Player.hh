#pragma once
#include "Deck.hh"
#include "Hand.hh"
#include "Discard.hh"
#include "Battleground.hh"

class Player{

    private:
        Deck deck;
        Hand hand;
        Discard discard;
        Battleground battleground;
        int smoke;

};