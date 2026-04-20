class Solution {
public:
    int cnt(vector<int>& arr)
    {
        int maxi=1,c=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1])
                c++;
            else
                c=1;
            maxi=max(maxi,c);
        }
        return maxi;
    }
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int maxi=cnt(nums);
        reverse(nums.begin(),nums.end());
        maxi=max(maxi,cnt(nums));
        return maxi;
    }
};