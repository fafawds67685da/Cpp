#include<iostream>
using namespace std;

class hotel {
    string name;
    int rno, rent, nod, amt;
    static int n;

public:
    hotel() {
        name = "";
        rno = 0;
        nod = 0;
        rent = 0;
        amt = 0;
    }

    void total_amount() {
        cout << "\t Enter room number \n";
        cin >> rno;
        cout << "\t Enter number of days \n";
        cin >> nod;
        cout << "\t Enter room rent \n";
        cin >> rent;
        cout << "\t Enter customer name \n";
        cin.ignore();
        getline(cin, name);
        cin.ignore();

        amt = nod * rent;
        n += 1;

        if (amt > 10000) {
            amt *= 1.05;
        }
    }

    void show_details() {
        cout << "\t Customer name is       : " << name << "\n";
        cout << "\t Room number is         : " << rno << "\n";
        cout << "\t Number of days spent is: " << nod << "\n";
        cout << "\t Amount due is          : " << amt << "\n";
    }

    static void rooms_booked() {
        cout << "\t Number of booked rooms are: " << n << "\n";
    }
};

int hotel::n = 0;

int main() {
    hotel ob;
    int ch = 0;

    while (ch != 4) {
        cout << "\t Enter 1 to input customer details and compute room rent \n";
        cout << "\t Enter 2 to show the details now\n";
        cout << "\t Enter 3 to know the number of booked rooms\n";
        cout << "\t Enter 4 to end the program \n";
        cin >> ch;

        switch (ch) {
            case 1: {
                ob.total_amount();
                break;
            }
            case 2: {
                ob.show_details();
                break;
            }
            case 3: {
                hotel::rooms_booked();
                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "\t INVALID CHOICE !!! \n";
                break;
            }
        }
    }

    return 0;
}
