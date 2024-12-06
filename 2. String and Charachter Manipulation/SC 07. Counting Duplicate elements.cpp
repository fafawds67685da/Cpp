#include<iostream>
using namespace std;

int main() {
    string n;
    cout << "\t Enter the string \n";
    getline(cin, n);

    int l = n.length();
    int z = 0;

    for(int i = 0; i < l; i++) {
        if(n[i] == ' ')
            continue;
        for(int j = i + 1; j < l; j++) {
            if(n[i] == n[j]) {
                z += 1;
                n[j] = ' ';
            }
        }
        n[i] = ' ';
    }

    cout << "\t Number of duplicate elements present are: " << z << " \n";

    return 0;
}
