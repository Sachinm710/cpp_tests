#include <iostream>
#include <string>

// This is to initialise the constructors rather than assigning the values using ':' operator

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int experience;


public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val,int health_val, int experience_val);

    string get_name() const{
        return name;
    }

    void set_name(string name_val){
        name = name_val;
    }

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

void display_name(const Player &p){
    cout << p.get_name() << endl;
}

int main(){
    const Player villain {"villain", 100, 55};
    Player hero {"Hero", 100, 15};

    // cout << hero.get_name() << endl;
    display_name(hero);

    return 0;
}