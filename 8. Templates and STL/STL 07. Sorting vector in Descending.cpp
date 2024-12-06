#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={1,2,3,5,4};
    sort(v.begin(),v.end(), greater<int>);
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
