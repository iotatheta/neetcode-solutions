class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) 
    {
        int n=nums.size();
        prefix.resize(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(i==0) continue;
            prefix[i]=prefix[i-1]+nums[i-1];
        }    
        prefix[n]=prefix[n-1]+nums[n-1];
    }
    
    int sumRange(int left, int right) 
    {
        return prefix[right+1]-prefix[left];    
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */