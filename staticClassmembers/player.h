#ifndef __PLAYER__H 
#define __PLAYER__H

#include <string>

using namespace std;

class Player{
private:
    static int num_of_players;
    string name;
    int health;
    int xp;
public:
    int get_health() {return health;}
    int get_xp() {return xp;}
    string get_name() {return name;}

    Player(string name_val = "None", int health_val = 0, int xp_val = 0);

    Player(const Player &source);

    ~Player();

    static int get_num_of_players();
};

#endif