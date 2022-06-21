class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> dp(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};
/*
Input
[1,3,6,7,9,4,10,5,6]
Output
5
Expected
6
*/