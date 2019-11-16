#pragma once
#include <string>
using namespace std;

class Card{

    public:
        Card(string n, string t, int c);
        string toString();

    private:
        string name;
        string tribe;
        int cost;
};