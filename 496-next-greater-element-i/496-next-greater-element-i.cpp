class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        
        int n=b.size();
        
        vector<int> v(n,0);
        
        stack<int> s;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=b[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                v[i]=-1;
            }
            
            else
            {
                v[i]=s.top();
            }
            
            s.push(b[i]);
        }
        
        vector<int> ans;
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    ans.push_back(v[j]);
                }
            }
        }
        
        return ans;
    }
};