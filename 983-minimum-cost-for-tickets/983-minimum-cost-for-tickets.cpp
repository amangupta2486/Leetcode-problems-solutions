class Solution {
public:
    
    set<int> mp;
    int dp[400];
    
    int solve(int i,vector<int>& c)
    {
        if(i>365)
        {
            return 0;
        }
        
        if(dp[i])
        {
            return dp[i];
        }
        
        int ans=0;
        
        if(mp.find(i)!=mp.end())
        {
            ans=min({c[0]+solve(i+1,c),c[1]+solve(i+7,c),c[2]+solve(i+30,c)});
        }
        //dp[i]=min({c[0]+solve(i+1,n,d,c),c[1]+solve(i+7,n,d,c),c[2]+solve(i+30,n,d,c)});
        
        else
        {
            ans=solve(i+1,c);
        }
        
        return dp[i]=ans;
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        
        int n=d.size();
        
        for(auto i:d)
        {
            mp.insert(i);
        }
        
        memset(dp,0,sizeof(dp));
        
        solve(1,c);
        
//         for(int i=0;i<n;i++)
//         {
//             dp[d[i]]=solve(i,n,d,c);
//         }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<dp[d[i]]<<" ";
        // }
        
        return dp[1];
        
    }
};