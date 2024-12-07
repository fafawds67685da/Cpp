class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>v;
        vector<int>row;

        if(numRows==1)
        {
            row.push_back(1);
            v.push_back(row);
            return v;
        }

        if(numRows==2)
        {
            row.push_back(1);
            v.push_back(row);
            row.clear();
            row.push_back(1);
            row.push_back(1);
            v.push_back(row);
            return v;
        }
        row.push_back(1);
        v.push_back(row);
        row.clear();
        row.push_back(1);
        row.push_back(1);
        v.push_back(row);
        row.clear();
        for(int i=3;i<=numRows;i++)
        {
            vector<int> row;
            row.push_back(1);
            for(int j=0;j<v[i-2].size()-1;j++)
            {
                row.push_back(v[i-2][j]+v[i-2][j+1]);
            }
            row.push_back(1);
            v.push_back(row);

        }
        return v;
    }
};
