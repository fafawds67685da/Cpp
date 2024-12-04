#include<iostream>
using namespace std;
class abc
{
public:
    int a;
    abc(){}
    abc(int x)
    {
        a=x;
    }

    abc operator -(abc& ob1)
    {
        return a-ob1.a;
    }

    void display()
    {
        cout<<a<<" ";
    }

};

int main()
{
    abc ob1(10),ob2(20),ob3;
    ob3 = ob1-ob2;
    ob3.display();
    return 0;

}
