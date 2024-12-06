#include<iostream>
using namespace std;

int main() {
    string st;
    
    cout << "Enter a string: ";
    getline(cin, st);
    
    int s = 0;
    int l = st.length();
    
    for(int i = 0; i < l; i++) {
        int x = (int)st[i];
        
        if(x >= 48 && x <= 57) {
            s = s + x - 48;
        }
    }
    
    cout << "Sum of digits in the string is: " << s;
    
    return 0;
}
