#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int privateA = 10;
    
public:
    friend class B; // Declaring class B as friend
};

class B {
public:
    void display(A& objA) {
        // Can access private members of class A
        cout << "Private value of A: " << objA.privateA << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.display(objA);
    return 0;
}
