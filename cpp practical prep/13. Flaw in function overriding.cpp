#include<iostream>
using namespace std;
class A
{
public:
    void f1()
    {
        printf("papa ji");
    }

};

class B: public A
{
public:
    void f1()
    {
        printf("Beta ji"); 
    }
};

int main()
{
    A* ob1;
    B ob;
    ob1=&ob;
    ob.f1();//  derived class function
    ob1->f1(); // base class function, flaw in function overriding, as this line must point to the functiond of derives class
    return 0; // but such is not happening in this case, that is why the concept of virtual keyword was needed
}
