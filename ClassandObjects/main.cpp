#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Player{
// Access Modifier    
public:
    // attributes (blueprint to create players)
    string name;
    int health;
    int experience;
    
    //methods
    void talk(string text_to_say) {cout<< name << " says " << text_to_say << endl;}
    bool is_dead();
};

class Account{
public:
    // attributes
    string name;
    double balance;
    
    //methods
    
    bool deposit (double bal) {balance += bal; cout << " In deposit " << endl; return true;}
    bool withdraw (double bal) {balance -= bal; cout << " In withdraw " << endl; return true;}
};

int main(){
    
    // declaring instance of the Class i.e Object
    Player Frank;
    Player hero;
    
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.experience = 12;
    Frank.talk("Hello");
    
    Player *enemy {nullptr};
    enemy = new Player;
    (*enemy).name = "Enemy";
    enemy->experience = 15;
    enemy->talk(" Matasshh! ");
    
    
    // declaring the players object as an array
    /*Player players[] {Frank, hero};
    
    vector <Player> player_vec {Frank};
    player_vec.push_back(hero);*/
    
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    delete enemy;
    return 0;
}
