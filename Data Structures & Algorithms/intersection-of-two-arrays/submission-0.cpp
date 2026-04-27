class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> s(nums1.begin(),nums1.end()),res;
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
                res.insert(nums2[i]);
        }    
        vector<int> ans(res.begin(),res.end());
        return ans;
    }
};