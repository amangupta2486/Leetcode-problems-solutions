class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        stack<int> s;
        
        map<int,int> mp;
        
        for(int i=m-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=b[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                mp[b[i]]=-1;
            }
            else
            {
                mp[b[i]]=s.top();
            }
            
            //cout<<mp[b[i]]<<" ";
            
            s.push(b[i]);
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[a[i]]);
        }
        
        return ans;
    }
};