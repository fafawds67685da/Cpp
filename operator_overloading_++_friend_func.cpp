#include<iostream>
using namespace std;
class A
{
    int a;
    public :
            A(int x)
            {
            a=x;
            }
            A()
            {}
            void display()
            {
                
                cout<<a;
            }
    friend A operator ++(A&ob)
{
    A ob1;
    ob1.a=++ob.a;
    return ob1;
}
friend A operator ++(A&ob,int)
{
    A ob5;
    ob5.a=ob.a++;
    return ob5;
}

};
int main()
{
    A c1(10);
    A c2;
    c2=c1++;
    c2=++c1;
    
    c2.display();

}