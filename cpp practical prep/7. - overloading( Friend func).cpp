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

    friend abc operator -(abc&, abc&);


    void display()
    {
        cout<<a<<" ";
    }
};

    abc operator -(abc& ob1, abc& ob2)
    {
        return ob1.a- ob2.a;
    }


int main()
{
    abc ob(10),ob3(10),ob4;
    ob4 = ob-ob3;
    ob4.display();
    return 0;
}
