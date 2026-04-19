class Solution {
public:
    bool f(string a,string b)
    {
        return a.find(b)!=string::npos;
    }
    vector<string> stringMatching(vector<string>& words) 
    {
        int n=words.size();
        sort(words.begin(),words.end(),[](const string& a,const string& b){
            return a.size()<b.size();
        });
        vector<string> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(f(words[j],words[i]))
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};