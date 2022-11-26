class Solution {
public:
    int n;
    
    int find(int i,vector<vector<int>> &v)
    {
        for(int nxt=i+1;nxt<n;nxt++)
        {
            if(v[nxt][0]>=v[i][1])
            {
                return nxt;
            }
        }
        
        return -1;
    }
    
    int solve(int i,vector<vector<int>> &v,vector<int>& a, vector<int>& b,vector<int>& p,vector<int> &dp)
    {
        if(i>=n)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=0;
        
        int next=find(i,v);
        int inc=p[i]+(next==-1 ? 0 : solve(next,v,a,b,p,dp));
        int exc=solve(i+1,v,a,b,p,dp);
        
        ans=max(inc,exc);
        
        return dp[i]=ans;
    }
    
    int jobScheduling(vector<int>& a, vector<int>& b, vector<int>& p) {
        n=p.size();
        vector<int> dp(n+1,-1);
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],b[i],p[i]});
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++)
        {
            a[i]=v[i][0];
            b[i]=v[i][1];
            p[i]=v[i][2];
        }
        //cout<<endl;
        
        return solve(0,v,a,b,p,dp);
    }
};