class Solution {
private:
    vector<int> getRow(int rowIndex)
    {
        vector<int> row = {1};
        for(int i=1;i<=rowIndex;i++)
        {
            row.push_back((int)(row.back() * 1LL * (rowIndex - i + 1)/i));
        }
        return row;
    }
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(getRow(i-1));
        }
        return ans;
    }
};