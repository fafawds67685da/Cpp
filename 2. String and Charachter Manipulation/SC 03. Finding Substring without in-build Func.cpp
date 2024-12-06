#include<iostream>
using namespace std;

int main() {
    string n1, n2;
    int l1, l2, y = 0;
    
    cout << "\t Enter the string \n";
    getline(cin, n1);
    
    cout << "\t Enter the first index \n";
    cin >> l1;
    
    cout << "\t Enter Number of character \n";
    cin >> l2;
    
    for(int i = l1; i < (l1 + l2); i++) {
        n2 += n1[i];
    }
    
    cout << "\t Substring is : " << n2 << "\n";
    
    return 0;
}
