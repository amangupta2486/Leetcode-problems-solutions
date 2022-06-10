class Solution {
public:
    int dp[100005][2][3];
    
    int solve(int i,vector<int>& p,int buy,int k)
    {
        if(i>=p.size() || k==0)
        {
            return 0;
        }
        
        if(dp[i][buy][k]!=-1)
        {
            return dp[i][buy][k];
        }
        int profit=0;
        
        if(buy)
        {
            profit=max(-1*p[i]+solve(i+1,p,0,k),solve(i+1,p,1,k));
        }
        else
        {
            profit=max(p[i]+solve(i+1,p,1,k-1),solve(i+1,p,0,k));
        }
        
        return dp[i][buy][k]=profit;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        // int dp[n+1][2];
        memset(dp,0,sizeof(dp));
        
        //return solve(0,p,1,2);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<2;buy++)
            {
                for(int k=1;k<=2;k++)
                {
                    int profit=0;
                    if(buy)
                    {
                        profit=max(-p[i]+dp[i+1][0][k],dp[i+1][1][k]);
                    }
                    else
                    {
                        profit=max(p[i]+dp[i+1][1][k-1],dp[i+1][0][k]);
                    }
                    dp[i][buy][k]=profit;
                }
            }
        }
        
        return dp[0][1][2];
    }
};