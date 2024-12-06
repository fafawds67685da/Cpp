#include<iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "\t Enter the two numbers \n";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        } else {
            c = a / b;
            cout << "\t Division of the numbers is: " << c;
        }
    } catch (float) {
        cout << "\t A number cannot be divided by 0";
    }

    return 0;
}
