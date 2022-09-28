class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> b=a;
        
        for(auto i:b)
        {
            a.push_back(i);
        }
        
        stack<int> s;
        
        vector<int> ans(n);
        
        for(int i=(2*n)-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=a[i])
            {
                s.pop();
            }
            
            if(i<n)
            {    
                if(s.empty())
                {
                    ans[i]=-1;
                }
                else
                {
                    ans[i]=s.top();
                }
            }
            
            s.push(a[i]);
        }
        
        return ans;
    }
};