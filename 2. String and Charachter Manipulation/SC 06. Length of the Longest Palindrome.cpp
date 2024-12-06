#include<iostream>
using namespace std;

class pal {
public:
    int palin(string n) {
        int l = n.length();
        string rev;
        
        for(int i = l - 1; i >= 0; i--) {
            rev += n[i];
        }
        
        if(rev.compare(n) == 0) {
            return 1;
        } else {
            return 2;
        }
    }
};

int main() {
    pal ob;
    string n1, n2;
    int max = 0;
    
    cout << "\t Enter the string \n";
    getline(cin, n1);
    
    int l = n1.length();
    
    for(int i = 0; i < l; i++) {
        for(int j = i; j < l; j++) {
            n2 = n1.substr(i, j + 1 - i);
            int z = ob.palin(n2);
            
            if(z == 1) {
                if(max < (j + 1 - i)) {
                    max = j + 1 - i;
                }
            }
        }
    }
    
    cout << "\t Length of the longest palindrome is: " << max << "\n";
    
    return 0;
}
