```
class Solution {
public:
int minFallingPathSum(vector<vector<int>>& g) {
int n=g.size();
int m=g[0].size();
int dp[n][m];
​
memset(dp,0,sizeof(dp));
for(int i=0;i<m;i++)
{
dp[n-1][i]=g[n-1][i];
}
for(int i=n-2;i>=0;i--)
{
for(int j=0;j<m;j++)
{
dp[i][j]=g[i][j];
int mn=dp[i+1][j];
if(j-1>=0)