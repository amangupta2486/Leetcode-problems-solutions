class Solution {
public:
    
    vector<int> dp;
    
    int solve(vector<int>& d, vector<int>& c,int j)
    {
        int n=d.size();
        
        if(j>=n)
        {
            return 0;
        }
        
        if(dp[j])
        {
            return dp[j];
        }
        int x=c[0]+solve(d,c,j+1);
        
        int i=0;
        
        for(i=j;i<n && d[i]<d[j]+7;i++);
        
        int y=c[1]+solve(d,c,i);
        
        for(i=j;i<n && d[i]<d[j]+30;i++);
        
        int z=c[2]+solve(d,c,i);

        int ans=min({x,y,z});
        
        return dp[j]=ans;
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        
        int n=d.size();
        
        dp.resize(n+1);
        
        return solve(d,c,0);
    }
};