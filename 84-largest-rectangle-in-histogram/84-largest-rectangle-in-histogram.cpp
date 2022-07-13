class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        int n=h.size();
        
        stack<int> s;
        
        vector<int> l(n,0),r(n,0);
        
        int i=0;
        
        while(i<n)
        {
            while(!s.empty() && h[s.top()]>=h[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                l[i]=0;
            }
            
            else
            {
                l[i]=s.top()+1;
            }
            
            s.push(i);
            i++;
        }
        
        i=n-1;
        
        while(!s.empty())
        {
            s.pop();
        }
        
        int ans=0;
        
        while(i>=0)
        {
            while(!s.empty() && h[s.top()]>=h[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                r[i]=n-1;
            }
            else
            {
                r[i]=s.top()-1;
            }
            
            ans=max(ans,h[i]*(r[i]-l[i]+1));
            
            s.push(i);
            i--;
        }
        
        // for(auto i:l)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i:r)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        return ans;
    }
};