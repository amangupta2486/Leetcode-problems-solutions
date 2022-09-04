```
int change(int a, vector<int>& c) {
int n=c.size();
//solve(c,a,0,0);
int dp[n+1][a+1];
for(int j=0;j<=a;j++)
{
dp[0][j]=0;
}
for(int i=0;i<=n;i++)
{
dp[i][0]=1;
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=a;j++)
{
if(c[i-1]<=j)
{
dp[i][j]=dp[i][j-c[i-1]] + dp[i-1][j];
}
else
{
dp[i][j] = dp[i-1][j];
}
}
}
return dp[n][a];
}
```