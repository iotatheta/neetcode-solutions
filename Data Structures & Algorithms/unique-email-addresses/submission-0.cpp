class Solution {
public:
    string convert(string s)
    {
        int n=s.size();
        string res="";
        bool atRate=false,plus=false;
        for(int i=0;i<n;i++)
        {
            if(atRate)
            {
                res+=s[i];
                continue;
            }
            if(s[i]=='@') 
            {
                atRate=true;
                res+=s[i];
            }
            if(plus) continue;
            if(s[i]=='+') plus=true;
            else if(s[i]=='.') continue;
            else
            {
                res+=s[i];
            }
        }
        return res;
    }
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string> s;
        for(auto e:emails)
        {
            s.insert(convert(e));
        }
        return s.size();
    }
};