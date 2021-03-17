#include "player.h"

int Player::num_of_players {0};

Player::Player(string name_val, int health, int xp)
    : name{name_val}, health {health}, xp{xp}{
        ++num_of_players;
}

Player::Player(const Player &source)
    :Player(source.name, source.health, source.xp){
}

Player::~Player(){
    --num_of_players;
}

int Player::get_num_of_players(){
    return num_of_players;
}