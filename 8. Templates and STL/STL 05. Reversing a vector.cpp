#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={1,2,3,5,4};
    reverse(v.begin(),v.end());
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
