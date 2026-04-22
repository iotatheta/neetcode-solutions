class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        s+=" ";
        unordered_map<char,int> mp1;
        unordered_map<string,int> mp2;
        vector<string> word;
        string w="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                w+=s[i];
            }
            else
            {
                word.push_back(w);
                w="";
            }
        }       
        if(pattern.size()!=word.size()) return false;
        for(int i=0;i<pattern.size();i++)
        {
            if(mp1[pattern[i]]!=mp2[word[i]])
                return false;
            mp1[pattern[i]]=i+1;
            mp2[word[i]]=i+1;
        }
        return true;
    }
};