#include<iostream>
using namespace std;

int main() {
    int n, z = 0, b = 0;
    
    cout << "\t Enter the array range \n";
    cin >> n;
    
    int a[n];
    
    cout << "\t Enter the array elements \n";
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) {
            z += 1;
        }
        else {
            b += 1;
        }
    }
    
    for(int i = 0; i < z; i++) {
        a[i] = 0;
    }
    
    for(int i = z; i < n; i++) {
        a[i] = 1;
    }
    
    cout << "\t Sorted array is \n";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
