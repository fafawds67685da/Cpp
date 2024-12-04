#include<iostream>
#include<fstream>
using namespace std;

    template <class T> void display(T*a)
    {
        cout<<*a;
    }
int main()
{
    int a=10;
    float b=10.5;
    string n="dev";
    display(&a);
    display(&b);
    display(&n);
    return 0;
}
