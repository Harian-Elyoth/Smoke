#include "Card.hh"
#include <sstream>

Card::Card(string n, string t, int c):name(n),tribe(t),cost(c){}

string Card::toString(){
    stringstream ss;
    ss << name << "|" << tribe << "|" << cost << endl;
    return ss.str();
}