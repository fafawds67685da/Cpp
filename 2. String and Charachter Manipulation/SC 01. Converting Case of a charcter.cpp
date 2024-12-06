#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a Character: " << endl;
    cin >> ch;
    
    if(ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
        cout << "The Uppercase of the Character is: " << ch << endl;
    }
    else {
        cout << "Invalid Input" << endl;
    }
    
    return 0;
}
