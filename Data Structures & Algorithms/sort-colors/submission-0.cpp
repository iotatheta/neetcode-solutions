class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) cnt0++;
            else if(nums[i]==1) cnt1++;
            else cnt2++;
        }    
        int k=0;
        while(cnt0--)
        {
            nums[k]=0;
            k++;
        }
        while(cnt1--)
        {
            nums[k]=1;
            k++;
        }
        while(cnt2--)
        {
            nums[k]=2;
            k++;
        }
    }
};