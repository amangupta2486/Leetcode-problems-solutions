class Solution {
public:
    int findNumberOfLIS(vector<int>& a) {
        int n=a.size();
        
        vector<int> dp(n,1);
        vector<int> cnt(n,1);
        
        int mx=0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[j]+1>dp[i])
                {
                    dp[i]=1+dp[j];
                    cnt[i]=cnt[j];
                }
                else if(a[j]<a[i] && dp[j]+1==dp[i])
                {
                    cnt[i]+=cnt[j];
                }
            }
            
            if(mx==dp[i])
            {
                ans+=cnt[i];
            }
            
            if(mx<dp[i])
            {
                mx=dp[i];
                ans=cnt[i];
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<cnt[i]<<" ";
        // }
        cout<<endl;
        return ans;
       
        
    }
};

/*
Input
[1,2,4,3,5,4,7,2]
Output
2
Expected
3
*/