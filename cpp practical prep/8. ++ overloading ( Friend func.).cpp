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

    friend abc operator ++(abc&,int);
    friend abc operator ++(abc&);


    void display()
    {
        cout<<a<<" ";
    }
};

    abc operator ++(abc& ob1, int)
    {
        return ob1.a++;
    }

    abc operator ++(abc& ob1)
    {
        return ++ob1.a;
    }


int main()
{
    abc ob(10),ob3,ob4;
    ob3 = ob++;
    ob3.display();
    ob4 = ++ob;
    ob4.display();
    return 0;
}
