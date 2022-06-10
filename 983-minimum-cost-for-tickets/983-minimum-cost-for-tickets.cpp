class Solution {
public:
    map<int,int> mp;
    int dp[400];
    
    int solve(int i,vector<int>& c)
    {
        if(i>365)
        {
            return 0;
        }
        
        if(dp[i]!=0)
        {
            return dp[i];
        }

        int ans=0;
        
        if(mp[i]>0)
        {
            ans =min({c[0]+solve(i+1,c),c[1]+solve(i+7,c),c[2]+solve(i+30,c)});
        }
        else
        {
            ans = solve(i+1,c);
        }
        
        return dp[i]=ans;
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        
        int n=d.size();
        
        for(int i=0;i<n;i++)
        {
            mp[d[i]]++;
        }
        memset(dp,0,sizeof(dp));
        
        return solve(1,c);
    }
};