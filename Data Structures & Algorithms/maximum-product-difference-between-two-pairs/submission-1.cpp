class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        int s=INT_MAX,ss=INT_MAX,l=INT_MIN,sl=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>l)
            {
                sl=l;
                l=nums[i];
            }
            else if(nums[i]>sl)
            {
                sl=nums[i];
            }

            if(nums[i]<s)
            {
                ss=s;
                s=nums[i];
            }
            else if(nums[i]<ss)
            {
                ss=nums[i];
            }
        }    
        return (int)((long)l*sl-(long)s*ss);
    }
};