class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int n=students.size();
        queue<int> q;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            q.push(students[i]);
            st.push(sandwiches[n-1-i]);
        }
        int c=0;
        while(!q.empty())
        {   
            if(q.front()==st.top())
            {
                q.pop();
                st.pop();
                c=0;
            }
            else
            {
                int x=q.front();
                q.push(x);
                q.pop();
                c++;
            }
            
            if(c==q.size()) break;
        }
        return q.size();
    }
};