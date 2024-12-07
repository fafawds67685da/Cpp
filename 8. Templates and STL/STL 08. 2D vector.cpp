#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
int main()
{

    vector<vector<int>>v={{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1}};

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
