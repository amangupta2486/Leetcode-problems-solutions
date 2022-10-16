class Solution {
public:
    
    int n;
    
    int dp[15][305];
    
    int solve(vector<int>& a, int d,int i)
    {
        if(d==1)
        {
            int mx=0;
            
            for(int j=i;j<n;j++)
            {
                mx=max(mx,a[j]);
            }
            
            return mx;
        }
        
        if(dp[d][i]!=-1)
        {
            return dp[d][i];
        }
        
        int mx=0;
        
        int ans=INT_MAX;
        
        for(int j=i;j<n-d+1;j++)
        {
            mx=max(mx,a[j]);
            
            ans=min(ans,mx+solve(a,d-1,j+1));
        }
        
        return dp[d][i]=ans;
    }
    
    int minDifficulty(vector<int>& a, int d) {
        
        n=a.size();
        
        if(n<d)
        {
            return -1;
        }
        
        memset(dp,-1,sizeof(dp));
        
        return solve(a,d,0);
    }
};