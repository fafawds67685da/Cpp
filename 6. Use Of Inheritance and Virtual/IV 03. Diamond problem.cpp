#include <iostream>
using namespace std;

class Gfather {
public:
    string eye = "blue", hair = "brown";
    bool hd = true;
    int height = 6;
};

class uncle : virtual public Gfather {
public:
    bool hd2 = hd;
    int height2 = height;
};

class father : virtual public Gfather {
public:
    string hair2 = hair;
    bool hd3 = hd;
};

class aunt : virtual public Gfather {
public:
    string eye2 = eye;
    bool hd4 = hd;
};

class Result : public father, public uncle, public aunt {
public:
    void display() {
        cout << "\t For Grandpa \n";
        cout << "\t Eye color is  :" << eye << "\n";
        cout << "\t Hair color is :" << hair << "\n";
        cout << "\t Height is     :" << height << "\n";
        cout << "\t Heart disease? " << hd << "\n";
        cout << "\n";

        cout << "\t For Uncle \n";
        cout << "\t Height is     :" << height2 << "\n";
        cout << "\t Heart disease? " << hd2 << "\n";
        cout << "\n";

        cout << "\t For Father \n";
        cout << "\t Hair color is: " << hair2 << "\n";
        cout << "\t Heart disease? " << hd3 << "\n";
        cout << "\n";

        cout << "\t For Aunt \n";
        cout << "\t Eye color is : " << eye2 << "\n";
        cout << "\t Heart disease? " << hd4 << "\n";
        cout << "\n";
    }
};

int main() {
    Result ob;
    ob.display();
    return 0;
}
