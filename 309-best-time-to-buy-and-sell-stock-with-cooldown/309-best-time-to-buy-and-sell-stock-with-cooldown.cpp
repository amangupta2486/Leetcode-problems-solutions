class Solution {
public:
    int dp[30005][2][2];
    
    int solve(int i,vector<int>& p,int buy,int cool)
    {
        if(i==p.size())
        {
            return 0;
        }
        
        if(dp[i][buy][cool]!=-1)
        {
            return dp[i][buy][cool];
        }
        int profit=0;
        
        if(buy && cool)
        {
            profit=max(-p[i]+solve(i+1,p,0,0),solve(i+1,p,1,1));    
        }
            
        else if(buy==0)
        {
            profit=max(p[i]+solve(i+1,p,1,0),solve(i+1,p,0,cool));
        }
        
        else if(cool==0)
        {
             profit=solve(i+1,p,buy,1);
        }  
        
        return dp[i][buy][cool]=profit;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,p,1,1);
    }
};