class Solution {
    vector<vector<int>>g;
    int n,m;
    int dfs(int i, int j, vector<vector<bool>> &vis)
    {
        if(i<0 || j<0 || i>=n || j>=m || g[i][j]==0)
        {return 1;}

        if(vis[i][j])
        {return 0;}

        vis[i][j]=1;
        int perimeter =0;

        perimeter += dfs(i+1, j,vis);
        perimeter += dfs(i,j+1,vis);
        perimeter += dfs(i-1,j,vis);
        perimeter += dfs (i,j-1,vis);

        return perimeter;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        this->g=grid;
        this->n = size(g);
        this->m = size(g[0]);

        vector<vector<bool>> vis(n, vector<bool>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j])
                {
                    return dfs(i,j,vis);
                }
            }
        }
        return -1;
    }
};
