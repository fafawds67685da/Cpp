#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e, largest, s_largest;
    
    cout << "Enter 5 numbers: " << endl;
    cin >> a >> b >> c >> d >> e;
    
    if(a > b) {
        largest = a;
        s_largest = b;
    }
    else {
        largest = b;
        s_largest = a;
    }
    
    if(c > largest) {
        s_largest = largest;
        largest = c;
    }
    else if(c > s_largest) {
        s_largest = c;
    }
    
    if(d > largest) {
        s_largest = largest;
        largest = d;
    }
    else if(d > s_largest) {
        s_largest = d;
    }
    
    if(e > largest) {
        s_largest = largest;
        largest = e;
    }
    else if(e > s_largest) {
        s_largest = e;
    }
    
    cout << "The Largest number is: " << largest << endl;
    cout << "The Second Largest number is: " << s_largest << endl;
    
    return 0;
}
