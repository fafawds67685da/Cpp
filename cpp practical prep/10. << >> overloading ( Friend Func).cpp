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

    friend void operator >>(istream& ,abc&);
    friend void operator <<(ostream& ,abc&);


    void display()
    {
        cout<<a<<" ";
    }
};

    void operator >>(istream& in ,abc& ob1)
    {
        in>>ob1.a;
    }

    void operator <<(ostream& out ,abc& ob1)
    {
        out<<ob1.a;
    }


int main()
{
    abc ob;
    printf("\t Enter the number \n");
    cin>>ob;
    cout<<ob;
    return 0;
}
