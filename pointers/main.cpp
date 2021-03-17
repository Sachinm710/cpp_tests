#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    vector <string> stooges {"sa", "ch", "in"};
    for (auto &arr:stooges){
        arr = "sachin";
        cout << arr << endl;
        }
    for (auto arr:stooges){
        cout << arr << endl;
        }
}
    