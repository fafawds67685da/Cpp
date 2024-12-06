#include <iostream> 
using namespace std;

class Academic {
public:
    string name;
    int roll, m1, m2, m3;

    void getinfo() {
        cout << "\t Enter the name \n";
        getline(cin, name);
        cout << "\t Enter roll no\n";
        cin >> roll;
        cout << "\t Enter marks in first subject\n";
        cin >> m1;
        cout << "\t Enter marks in second subject\n";
        cin >> m2;
        cout << "\t Enter marks in third subject\n";
        cin >> m3;
    }

    void showinfo() {
        cout << "\t Name is                    :" << name << "\n";
        cout << "\t Roll no is                 : " << roll << "\n";
        cout << "\t Marks in first subject is  : " << m1 << "\n";
        cout << "\t Marks in second subject is : " << m2 << "\n";
        cout << "\t Marks in third subject is  : " << m3 << "\n";
    }
};

class Extra_Curricular {
public:
    int sports_marks, GP;

    void getmarks() {
        cout << "\t Enter marks in Sports\n";
        cin >> sports_marks;
        cout << "\t Enter marks in GP\n";
        cin >> GP;
    }
};

class Result : private Academic, protected Extra_Curricular {
public:
    int total;

    void get_total() {
        getinfo();  // Calls getinfo from Academic class
        getmarks();  // Calls getmarks from Extra_Curricular class
        total = m1 + m2 + m3 + GP + sports_marks;  // Calculating total marks
    }

    void show() {
        showinfo();  // Calls showinfo from Academic class
        cout << "\t Total marks are : " << total << "\n";
    }
};

int main() {
    Result ob;
    ob.get_total();  // Collect all information and calculate total
    ob.show();  // Display the information and total marks
    return 0;
}
