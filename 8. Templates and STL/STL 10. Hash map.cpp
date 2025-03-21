#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>ma;
    for(int i =1;i<=10;i++)
    {
        ma[i]=i*19;
    }
    for(int i = 0;i<=10;i++)
    {
        if(ma[i]==19)
        {
            cout<<"yes";
        }
    }
     for (auto it = ma.begin(); it != ma.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
    return 0;
}
