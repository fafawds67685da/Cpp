#include<iostream>
using namespace std;

int main() {
    string n;
    cout << "\t Enter the string \n";
    getline(cin, n);

    char ch;
    cout << "\t Enter the character to remove \n";
    cin >> ch;

    int l = n.length();
    string n2;
    int z = 0;

    for(int i = 0; i < l; i++) {
        if(n[i] != ch) {
            n2 += n[i];
            z += 1;
        }
    }

    if(z == l) {
        cout << "\t The character was not present \n";
    } else {
        cout << "\t New string is: " << n2 << "\n";
    }

    return 0;
}
