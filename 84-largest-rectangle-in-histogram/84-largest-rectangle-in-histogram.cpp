class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        
        stack<int> s;
        
        int i=0,j=n-1;
        
        vector<int> l(n,0),r(n,0);
        int ans=0;
        
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
        
        while(!s.empty())
        {
            s.pop();
        }
        
        
        while(j>=0)
        {
             while(!s.empty() && h[s.top()]>=h[j])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                r[j]=n-1;
            }
            else
            {
                r[j]=s.top()-1;
            }
            
            ans=max(ans,(r[j]-l[j]+1)*h[j]);
            
            s.push(j);
            j--;
        }
        
        return ans;
    }
};