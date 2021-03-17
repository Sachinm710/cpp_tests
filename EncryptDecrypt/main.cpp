#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};
    
    string secret_message {};
    cout<< "Enter the secret message: ";
    getline(cin, secret_message);
    
    string encrypted_message {};
    string decrypted_message {};
    
    for (char c:secret_message){
        size_t pos = alphabet.find(c);
        if (pos != string::npos){
            char new_char = key.at(pos);
            encrypted_message += new_char;
        }else{
            encrypted_message += c;    
        }
    }
    
    cout << "\nThe encrypted message is: "<< encrypted_message << endl;
    cout << "\nDecrypting the message: " << encrypted_message << endl;
    
    for (char c:encrypted_message){
        size_t pos = key.find(c);
        if (pos != string::npos){
            char new_char = alphabet.at(pos);
            decrypted_message += new_char;
        }else{
            decrypted_message += c;    
        }
    }
    cout << "\nThe decrypted message is: "<< decrypted_message <<" \n "<< endl;


}
