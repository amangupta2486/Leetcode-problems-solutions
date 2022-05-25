class Solution {
public:
    
    map<int,int> mp;
    
    void solve(vector<int>& a)
    {
        int n=a.size();
        
        stack<int> s;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=a[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                mp[a[i]]=-1;
            }
            
            else
            {
                mp[a[i]]=s.top();
            }
            
            s.push(a[i]);
        }
    }
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        solve(b);
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[a[i]]);
        }
        
        return ans;
    }
};