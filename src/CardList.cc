#include "CardList.hh"
#include <list>

CardList::CardList(list <Card*> list):l(list){}

Card* CardList::draw(){
    Card *c = *l.begin();
    l.pop_front();
    return c;
}