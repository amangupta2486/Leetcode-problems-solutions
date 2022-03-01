class Solution {
public:

    bool wordBreak(string s, vector<string>& w) {
        
        int n=s.size();
        int m=w.size();
        
        if(m==0)
        {
            return 0;
        }
        
        unordered_map<string,bool> mp;
        
        bool dp[n+1];
        memset(dp,0,sizeof(dp));
        
        for(auto i:w)
        {
           mp[i]=1;
        }
        
        dp[0]=1;
        
        for(int i=1;i<=n;i++)
        {
             for(int j=i;j>=0;j--)
             {
                 if(dp[j])
                 {
                     string b=s.substr(j,i-j);
                     
                     if(mp[b])
                     dp[i]=1;
                 }
             }
        }
        
        return dp[n];
    }
};