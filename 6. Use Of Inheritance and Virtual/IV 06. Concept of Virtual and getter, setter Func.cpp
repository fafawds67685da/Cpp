#include <iostream>
using namespace std;

// Abstract base class
class shape {
private:
    int height, length;
public:
    shape() : height(0), length(0) {}
    shape(int a, int b) : height(a), length(b) {}

    void setHeight(int h) {
        height = h;
    }

    void setLength(int l) {
        length = l;
    }

    int getHeight() const {
        return height;
    }

    int getLength() const {
        return length;
    }

    virtual void area() = 0;  // Pure virtual function
};

// Derived class for Triangle
class triangle : public shape {
public:
    triangle() : shape() {}
    triangle(int a, int b) : shape(a, b) {}

    void area() override {
        double ar = 0.5 * getHeight() * getLength();
        cout << "Triangle Area:\t" << ar << "\n";
    }
};

// Derived class for Rectangle
class rectangle : public shape {
public:
    rectangle() : shape() {}
    rectangle(int a, int b) : shape(a, b) {}

    void area() override {
        double ar = getHeight() * getLength();
        cout << "Rectangle Area:\t" << ar << "\n";
    }
};

int main() {
    shape *ob1; // Pointer to base class

    // Triangle
    int a, b;
    cout << "\t Enter height and length for the triangle: \n";
    cin >> a >> b;
    triangle ob2(a, b);
    ob1 = &ob2;
    ob1->area();  // Calls triangle's area

    // Rectangle
    cout << "\t Enter height and length for the rectangle: \n";
    cin >> a >> b;
    rectangle ob3(a, b);
    ob1 = &ob3;  // Reusing the same base class pointer
    ob1->area();  // Calls rectangle's area

    return 0;
}
