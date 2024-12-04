#include<iostream>
using namespace std;
class shape
{
public:
    int l,b;
    shape(){}
    void get_data()
    {
        cin>>l>>b;
    }
    void virtual area()
    {}
};

class rectangle: public shape
{
public:
    void area()
    {
        printf("\t For Rectangle \n");
        get_data();
        cout<<l*b<<" \n";
    }
};

class triangle: public shape
{
public:
    void area()
    {
        printf("\t For Triangle \n");
        get_data();
        cout<<0.5*l*b<<" \n";
    }
};

int main()
{
    shape* ob1;
    rectangle ob;
    ob1=&ob;

    ob1->area();

    triangle ob3;
    ob1=&ob3;

    ob1->area();// Now since we used virtual keyword, the function of derived will be called, hence preserving the properties of method overriding
    return 0;
}
