#include<iostream>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    str = " " + str;
    int l = str.length();
    
    for(int i = 0; i < l; i++) {
        if(str[i] == ' ') {
            int x = (int)str[i + 1];
            if(x >= 97 && x <= 122) {
                x = x - 32;
            }
            str[i + 1] = (char)x;
        }
    }
    
    cout << "New string: " << str;
    
    return 0;
}
