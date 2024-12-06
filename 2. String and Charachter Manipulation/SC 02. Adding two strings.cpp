#include<iostream>
using namespace std;

int main() {
    string n1, n2, n3;
    int l1, l2;
    
    cout << "\t Enter the first string \n";
    getline(cin, n1);
    
    cout << "\t Enter the second string \n";
    getline(cin, n2);
    
    l1 = n1.length();
    l2 = n2.length();
    
    for(int i = 0; i < (l1 + l2); i++) {
        if(i < l1) {
            n3 += n1[i];
        }
        else {
            n3 += n2[i - l1];
        }
    }
    
    cout << "\t New string is : " << n3 << "\n";
    
    return 0;
}
