#include<iostream>
#include<fstream>
#include <string>
#include <algorithm>
using namespace std;

template<class T>T add(T*a, int n)
{
    T sum;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    string s[3]={"DEV"," ","Goyal"};
    int a[3]={1,2,3};
    int z=add(a,3);
    cout<<z;
    string n=add(s,3);
    cout<<n;
    return 0;


}
