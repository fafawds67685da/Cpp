#include<iostream>
#include<fstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    string n;
    printf("\t Enter the text \n");
    getline(cin,n);
    out.open("abc.txt");
    out<<n;
    out.close();
    string n2;
    in.open("abc.txt");
    char ch=in.get();
    n2=n2+ch;
    while(!in.eof())
    {

        ch=in.get();
        n2+=ch;
    }
    n2=n2+' ';
    in.close();

    int l=n2.length();
    string n3,n4;
    int a=0;
    for(int i=0;i<l;i++)
    {
        if(n2[i]==' ')
        {
            n3=n2.substr(a,i);
            a=i;
            reverse(n3.begin(),n3.end());
            n4+=n3+' ';
        }
    }

    cout<<n4;
    return 0;


}
