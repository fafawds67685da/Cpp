class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<int> c;
        c=score; 
        sort(c.begin(),c.end(),greater<int>());
        vector<string>ans;
        for(int i=0;i<c.size();i++)
        {
            auto it =find(c.begin(),c.end(),score[i]);
            int z=abs(c.begin()-it) +1;
            if(z==1)
            {
                ans.push_back("Gold Medal");
            }

            else if(z==2)
            {
                ans.push_back("Silver Medal");
            }

            else if(z==3)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                ans.push_back(to_string(z));
            }
        }
        return ans;
    }
};
