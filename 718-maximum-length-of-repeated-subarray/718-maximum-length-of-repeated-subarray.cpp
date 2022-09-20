class Solution {
public:
    
    int n,m;
    
    int dp[1005][1005];
    
    int ans=0;
    
    int solve(int i,int j,vector<int>& a, vector<int>& b)
    {
        if(i>=n || j>=m)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        solve(i+1,j,a,b);
        solve(i,j+1,a,b);
            
        int common=0;
        
        if(a[i]==b[j])
        {
            common = 1+solve(i+1,j+1,a,b);    
        }
        
        ans=max(ans,common);
        
        return dp[i][j]=common;
    }
    
    int findLength(vector<int>& a, vector<int>& b) {
        
        n=a.size();
        m=b.size();
        
        memset(dp,-1,sizeof(dp));
        
        solve(0,0,a,b);
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return ans;
    }
};