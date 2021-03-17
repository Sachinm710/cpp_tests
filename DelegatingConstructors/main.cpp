#include <iostream>
#include <string>

// This is to delegate constructors to avoid redundancy

using namespace std;

class Player{
private:
    std::string name {"XXX"};
    int health;
    int experience;

public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val,int health_val, int experience_val);
};

// Delegating constructor
Player::Player()
    : Player{"None",0,0} {
}

Player::Player(std::string name_val)
    : Player{name_val,0,0} {
}

Player::Player(std::string name_val, int health_val, int experience_val)
    : name{name_val}, health{health_val}, experience{experience_val}{
}

int main(){
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}