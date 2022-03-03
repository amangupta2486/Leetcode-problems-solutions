class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        
        int n=p.size();
        
        sort(p.begin(),p.end());
        
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(p[j][1]<p[i][0])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};