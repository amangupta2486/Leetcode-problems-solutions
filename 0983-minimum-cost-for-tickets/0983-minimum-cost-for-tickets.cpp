class Solution {
public:
    
    int n;
    
    unordered_set<int> s;
    int dp[366];
    
    int solve(int i,vector<int>& d, vector<int>& c)
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
        
        if(s.find(i)!=s.end())
        {
            ans=min({c[0]+solve(i+1,d,c),c[1]+solve(i+7,d,c),c[2]+solve(i+30,d,c)});
        }
        else
        {
            ans=solve(i+1,d,c);
        }
        
        return dp[i]=ans;
    }
    
    int mincostTickets(vector<int>& d, vector<int>& c) {
        
        n=d.size();
        
        for(auto x:d)
        {
            s.insert(x);
        }
        
        memset(dp,-1,sizeof(dp));
        
        return solve(1,d,c);
    }
};