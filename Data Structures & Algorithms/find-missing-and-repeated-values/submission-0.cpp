class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<int> ans(2,0);
        unordered_set<int> s;
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                x^=grid[i][j];
                s.insert(grid[i][j]);
            }
        }
        int sum=0;
        for(auto ele:s)
        {
            x^=ele;
            sum+=ele;
        }
        ans[0]=x,ans[1]=n*n*(n*n+1)/2-sum;
        return ans;
    }
};