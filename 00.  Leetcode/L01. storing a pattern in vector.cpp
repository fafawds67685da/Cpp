#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
int main()
{

    vector<vector<int>>v;
    vector<int>row;
    for(int i=1;i<=5;i++)
    {
        row.clear();
        for(int j=1;j<=i;j++)
        {
            row.push_back(j);
        }
        v.push_back(row);
    }

    for(auto x:v)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
