#include<iostream>
using namespace std;
class abc2;
class abc
{
public:
    int a;
    abc(int x)
    {
        a=x;
    }

    void display()
    {
        cout<<a<<" ";
    }

    friend void swap(abc&, abc2&);


};

class abc2
{
public:
    int b;
    abc2(int y)
    {
        b=y;
    }

    void display()
    {
        cout<<b<<" ";
    }

    friend void swap(abc&, abc2&);
};

void swap(abc & ob1, abc2& ob2)
{
    int a = ob1.a;
    ob1.a = ob2.b;
    ob2.b = a;
}

int main()
{
    abc ob(10);
    abc2 ob1(20);
    swap(ob,ob1);
    ob.display();
    ob1.display();
    return 0;
}
