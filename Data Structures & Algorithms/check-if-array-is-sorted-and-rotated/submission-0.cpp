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
    bool check(vector<int>& nums) 
    {
        int n=nums.size();
        int ind=n-1;
        for(ind=n-1;ind>=1;ind--)
        {
            if(nums[ind]<nums[ind-1])
                break;
        }   
        int x=n-ind;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            a[(i+x)%n]=nums[i];
        } 
        if(isSorted(a))
            return true;
        
        return false;
    }
};