class Solution {
public:
    
    int find(vector<int> &h)
    {
        int n=h.size();
        
        int i=0;
        stack<int> s;
        
        vector<int> l(n,0),r(n,0);
        
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
        
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++)
            if(g[0][i]=='1')
            dp[0][i]=1;
        
        int area=0;
        
        area=max(area,find(dp[0]));
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='1')
                {
                    dp[i][j]=1+dp[i-1][j];
                }
                
            }
            
            area=max(area,find(dp[i]));
        }
        
        return area;
    }
};