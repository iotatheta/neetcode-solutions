class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        long long sr=accumulate(nums.begin(),nums.end(),0LL);
        sr-=nums[0];
        if(sr==0) return 0;
        long long sl=0;
        for(int i=1;i<nums.size();i++)
        {
            sl+=nums[i-1];
            sr-=nums[i];
            if(sl==sr) return i;
        }    
        return -1;
    }
};