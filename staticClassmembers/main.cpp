#include<iostream>
#include "player.h"

using namespace std;

void display_active_players(){
    cout << "Active PLayers = " << Player::get_num_of_players() << endl;
}

int main(){
    display_active_players();
    Player hero {"hero"};
    display_active_players();

    Player *enemy = new Player{"Enemy", 10, 10};
    display_active_players();
    delete enemy;
    display_active_players();

    return 0;
}