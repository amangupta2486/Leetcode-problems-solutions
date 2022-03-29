```
class Solution {
public:
int minPathSum(vector<vector<int>>& g) {
int n=g.size();
int m=g[0].size();
int dp[n+1][m+1];
for(int i=0;i<m;i++)
{
dp[n][i]=INT_MAX;
}
for(int i=0;i<n;i++)
{
dp[i][m]=INT_MAX;
}
dp[n][m-1]=dp[n-1][m]=0;
for(int i=n-1;i>=0;i--)
{
for(int j=m-1;j>=0;j--)
{
dp[i][j]=g[i][j]+min(dp[i+1][j],dp[i][j+1]);
}
}
return dp[0][0];
}
};
```