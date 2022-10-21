class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        int n=a.size();
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i]);
        }
        
        vector<int> fr(mx+2,0);
        
        for(auto x:a)
        {
            fr[x]++;
        }
        
        vector<int> dp(mx+2,0);
        
        dp[1]=fr[1];
        
        if(mx>1)
        dp[2]=max(dp[1],2*fr[2]);
        
        for(int i=3;i<=mx;i++)
        {
            dp[i]=max(dp[i-2]+(i*fr[i]),dp[i-1]);
        }
        
//         for(int i=1;i<=mx;i++)
//         {
//             cout<<dp[i]<<" ";
//         }
        
//         cout<<endl;
        
        return dp[mx];
    }
};