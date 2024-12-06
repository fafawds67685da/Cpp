#include<iostream>
using namespace std;
class b;
class c
{
public :
    int a=10;

    friend void sum (c&,b&);
};
class b
{
public :
    int y=50;
    friend void sum (c&,b&);
};
void sum(c& ob1,b&ob2)
{
    int z= ob1.a+ob2.y;
    cout<<z;
}
int main()
{
    c ab;
    b cd;
    sum(ab,cd);
    return 0;
}