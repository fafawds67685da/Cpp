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

    abc operator ++()
    {
        return ++a;
    }

    abc operator ++(int)
    {
        return a++;
    }

    void display()
    {
        cout<<a<<" ";
    }

};

int main()
{
    abc ob1(10),ob3,ob4;
    ob3 = ++ob1;
    ob4 = ob1++;
    ob3.display();
    ob4.display();
    return 0;

}