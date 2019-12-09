#include "Player.h"

int Player::id = 0;

Player::Player () {
    initAttributes();
}

Player::Player(std::string n, Deck &d, std::string h):
name(n), deck(d), hero(h) {
    id++;
    smoke = 100;
    normalSummon = false;
    fullBoard = false;
}

Player::Player(std::string n, std::string h):
name(n), hero(h) {
    smoke = 100;
    normalSummon = false;
    fullBoard = false;
}

Player::~Player () {}

Player Player::operator=(const Player& P){
    this->name = P.name;
    this->smoke = P.smoke;
    this->deck = P.deck;
    this->hero = P.hero;
    this->normalSummon = P.normalSummon;
    this->fullBoard = P.fullBoard;
}

std::ostream& operator<<(std::ostream& os, Player& P){
    os << "Player : " << P.getName() << std::endl << (*P.getDeck());
    return os;
}

void Player::initAttributes () {
    id++;
    name = "ERROR";
    smoke = 0;
    deck = *(new Deck());
    hero = "ERROR";
    normalSummon = false;
    fullBoard = false;
}

