class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back({nums[i],mp[nums[i]]});
        }
        sort(arr.begin(),arr.end(),[](pair<int,int>& a,pair<int,int>& b)
        {
            if(a.second == b.second)
                return a.first>b.first;
            return a.second<b.second;
        });
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};