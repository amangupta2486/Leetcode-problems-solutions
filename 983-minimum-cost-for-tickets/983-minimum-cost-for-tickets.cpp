class Solution {
public:
    unordered_map<int,int> mp;
    
    int dp[366];
    
    int solve(int i,vector<int>& days, vector<int>& costs)
    {
        if(i>365)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int ans=0;
        
        if(mp[i])
        {
            ans=min({costs[0]+solve(i+1,days,costs),costs[1]+solve(i+7,days,costs),costs[2]+solve(i+30,days,costs)});
        }
        else
        {
            ans=solve(i+1,days,costs);
        }
        
        return dp[i]=ans;
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        for(auto i:days)
        {
            mp[i]++;
        }
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,days,costs);
    }
};