class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>freq;
        for(auto x:nums)
        {
            freq[x]++;// making new key, and storing the value frequency at the same time
            if(freq[x]>1)
            return 1;
        } 
        return 0;   
    }
};
