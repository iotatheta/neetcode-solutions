class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int end=flowerbed.size();
        if(end==1)
        {
           if(flowerbed[0]==1) return n==0;
           else return n<=1; 
        }
        int cnt=0,c=0;
        for(int i=1;i<end-1;i++)
        {
            if(flowerbed[i]==0)c++;
            if(flowerbed[i] || i==end-2)
            {
                cnt+=(c-1)/2;
                c=0;
            } 
        }    
        if(flowerbed[0]==0 && flowerbed[1]==0) cnt++;
        if(flowerbed[end-1]==0 && flowerbed[end-2]==0 && end-2!=0) cnt++;
        cout<<cnt<<endl;
        return cnt>=n;
    }
};