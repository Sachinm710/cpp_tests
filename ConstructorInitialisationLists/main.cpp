#include <iostream>
#include <string>

// This is to initialise the constructors rather than assigning the values using ':' operator

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

// this is current object
Player::Player()
    : name{"None"}, health{0}, experience{0}{
}

Player::Player(std::string name_val)
    : name{name_val}, health{0}, experience{0}{
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