#include "CardList.h"

CardList::CardList(){
    initAttributes();
}

CardList::~CardList () { }

void CardList::add(std::vector<Card>::iterator it){
    if(&(*it)) cList.push_back(*it);
}

void CardList::add(Card& card){
    cList.push_back(card);
    return;
}

void CardList::add(std::vector<Card> &cL){
    cList.insert(cList.end(), cL.begin(), cL.end());
    return;
}

void CardList::erase(std::vector<Card>::iterator it){
    cList.erase(it);
    return;
}

Card& CardList::front(){
    return cList.front();
}

std::vector<Card>::iterator CardList::begin(){
    return cList.begin();
}

std::vector<Card>::iterator CardList::end(){
    return cList.end();
}

bool CardList::isEmpty(){
    return cList.empty();
}

bool CardList::isFull(){
    if(cList.size() < maxSize) return false;
    else return true;
}

size_t CardList::size(){
    return cList.size();
}

void CardList::show(){
    return;
}

std::ostream& operator<<(std::ostream& os, CardList& d){
    int size = d.getCList().size();
    for(int i = 0; i < size; i++)os << d.getCList()[i];
    return os;
}

void CardList::operator=(CardList& cL){
    this->cList = cL.cList;
    return;
}

Card& CardList::operator[](int index){
    int i = 0;
    for(std::vector<Card>::iterator it = cList.begin(); it != cList.end(); it++){
        if(i == index) return *it;
        i++;
    }
    Card card;
    return card;
}

void CardList::initAttributes(){
    cList.clear();
    maxSize = 5;
    return;
}
