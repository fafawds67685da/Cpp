#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	vector<int>vec;
	set<int>s;
	int n;
	cin>>n;
	cout<<"Enter\n";
	for(int i =0;i<n;i++)
    {
        int z=0;
        cin>>z;
        vec.push_back(z);
        s.insert(z);
    }

    cout<<"\t Vector : \n";
    for(int i =0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }

    vector<int>vec2(s.begin(),s.end());
    cout<<"\t Set : \n";
    for(int i =0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<" ";
    }
}
