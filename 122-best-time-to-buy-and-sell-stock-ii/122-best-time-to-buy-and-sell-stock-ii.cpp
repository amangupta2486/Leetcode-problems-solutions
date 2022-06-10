class Solution {
public:
    
    //int dp[30005][2];
    /*
    int solve(int i,vector<int>& p,int buy)
    {
        if(i>=p.size())
        {
            return 0;
        }
        
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        int profit=0;
        
        if(buy)
        {
            profit=max(-1*p[i]+solve(i+1,p,0),solve(i+1,p,1));
        }
        else
        {
            profit=max(p[i]+solve(i+1,p,1),solve(i+1,p,0));
        }
        
        return dp[i][buy]=profit;
    }
    */
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        // int dp[n+1][2];
        // memset(dp,0,sizeof(dp));
        
        //return solve(0,p,1);
        
        vector<int> ahead(2,0),curr(2,0);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<2;buy++)
            {
                if(buy==1)
                curr[buy]=max(-p[i]+ahead[0],ahead[1]);
                
                else
                curr[buy]=max(p[i]+ahead[1],ahead[0]);
            }
            
            ahead=curr;
        }
        
        return ahead[1];
    }
};