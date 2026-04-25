class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        int ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<chars.size();i++)
        {
            mp[chars[i]]++;
        }      
        for(auto s : words)
        {
            auto temp=mp;
            bool f=true;
            for(int i=0;i<s.size();i++)
            {
                temp[s[i]]--;
                if(temp[s[i]]<0)
                {
                    f=false;
                    break;
                }
            }
            if(f)
                ans+=s.size();
        }
        return ans;
    }
};