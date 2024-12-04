#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    ofstream out;


    out.open("abc.txt");
    out<<"DEV\nGoyal";
    out.close();


    char ch;
    in.open("abc.txt");

    ch = in.get();
    while(!in.eof())
    {
        cout<<ch;
        ch=in.get();
    }
    in.close();
    return 0;
}
