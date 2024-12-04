#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    string a;
    in.open("abc.txt");
    in>>a;
    cout<<a;
    in.close();
    return 0;
}
