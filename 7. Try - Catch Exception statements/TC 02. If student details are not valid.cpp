#include<iostream>
using namespace std;

class student {
public:
    student() {}

    void info(string n, int r, int c1, int c2) {
        int z = 0;
        try {
            for (int i = 0; i < n.length(); i++) {
                if ((int)n[i] >= 48 && (int)n[i] <= 57) {
                    throw n;
                } else {
                    z += 1;
                }
            }
            if (z != 0) {
                cout << "\t The entered name is valid \n";
            }

            if (!(r >= c1 && r <= c2)) {
                throw r;
            } else {
                cout << "\t Roll number is valid as per the user choice \n";
            }
        }

        catch (string) {
            cout << "\t The entered name is not valid \n";
        }

        catch (int) {
            cout << "\t The entered roll number is not valid as per the user choice \n";
        }
    }
};

int main() {
    int r, c1, c2;
    string n;

    cout << "\t Enter the name \n";
    getline(cin, n);

    cout << "\t Enter the roll number \n";
    cin >> r;

    cout << "\t Enter the range of roll number, what must be the upper bound? \n";
    cin >> c2;

    cout << "\t And the lower bound? \n";
    cin >> c1;

    student ob;
    ob.info(n, r, c1, c2);

    return 0;
}
