#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("abc.txt");
    out<<"DEV";
    out.close();
    return 0;
}
