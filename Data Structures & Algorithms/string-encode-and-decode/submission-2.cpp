class Solution {
public:
    string encode(vector<string>& strs) 
    {
        if(strs.empty()) return "";
        string ans="";
        for(auto s : strs)
        {
            ans+=to_string(s.size())+",";
        }
        ans+="#";
        for(auto s : strs)
        {
            ans+=s;
        }
        return ans;
    }
    vector<string> decode(string s) 
    {
        vector<string> ans;
        vector<int> sizes;
        int i=0;
        string cur="";
        while(i<s.size() && s[i]!='#')
        {
            if(s[i]!=',')
            {
                cur+=s[i];
            }
            else
            {
                if(!cur.empty())
                sizes.push_back(stoi(cur));
                cur="";
            }
            i++;
        }
        i++;
        for(auto sz : sizes)
        {
            ans.push_back(s.substr(i,sz));
            i+=sz;
        }
        return ans;
    }
};
