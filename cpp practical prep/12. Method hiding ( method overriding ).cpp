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
        printf("Beta ji"); // function hiding, as f1 function of class A was hidden
                          // Used to supress the content of a parent class,, when we have written the same function with superior code
    }
};

int main()
{
    B ob;
    ob.f1();
    return 0;
}
