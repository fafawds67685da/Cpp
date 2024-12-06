#include<iostream>
using namespace std;
class b
{
public:
    b(){}
    int r,i;
    b(int x , int y)
    {
        r=x;
        i=y;
    }
    void display()
    {
        cout<<r<<" "<<i<<"i";
    }
    friend b operator + (b&,int);
};

    b operator + (b& ob1,int r2)
    {
        b ob4;
        ob4.r = ob1.r+r2;
        ob4.i= ob1.i;
        return ob4;
    }
int main()
{
    int p,q;
    cout<<"\tEnter the real part\n";
    cin>>p;
    cout<<"\t Enter the imaginary part \n";
    cin>>q;
    b ob1(p,q);
    b ob2 ;
    ob2=ob1+10;
    ob2.display();
    return 0;
}
