#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char **argv)
{
    int change {0};
    cout << "Enter the amout of change to be offered:"; 
    cin>>change;
    if (change >= 0){
        int Dollars = change/100;
        cout << "Dollars:" <<  Dollars << endl;
        int decimals_c = change%100;
        int quarter = decimals_c/25;
        cout << "Cents:" << quarter << endl;
        decimals_c = decimals_c%25;
        int Dime = decimals_c/10;
        cout << "Dime:" << Dime << endl;
        decimals_c = decimals_c%10;
        int nickel = decimals_c/5;
        cout << "nickel:" << nickel << endl;
        decimals_c = decimals_c%5;
        cout << "penny:" << decimals_c << endl;
        }
	return 0;
}
