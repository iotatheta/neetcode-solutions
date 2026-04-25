class Solution {
private:
    bool isSorted(vector<int>& arr)
    {
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<arr[i-1])
                return false;
        }
        return true;
    }
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int cnt1=1,cnt2=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
                cnt1++;
            if(nums[i]>=nums[i-1])
                cnt2++;
        }
        return cnt1==nums.size() | cnt2==nums.size();    
    }
};