class Solution {
public:
    /*
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
    */
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        // int dp[n+1][2];
        // int after[2][3],curr[2][3];
        // memset(after,0,sizeof(after));
        // memset(curr,0,sizeof(curr));
        
        vector<vector<int>> after(2,vector<int>(3,0)),curr(2,vector<int>(3,0));
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
                        profit=max(-p[i]+after[0][k],after[1][k]);
                    }
                    else
                    {
                        profit=max(p[i]+after[1][k-1],after[0][k]);
                    }
                    curr[buy][k]=profit;
                }
                after=curr;
            }
        }
        
        return after[1][2];
    }
};