```
class Solution {
public:
int dp[1001][1001];
int lcs(string a,string b,int n,int m)
{
if(n==0 || m==0)
{
return 0;
}
if(dp[n][m]!=-1)
{
return dp[n][m];
}
if(a[n-1]==b[m-1])
{
return dp[n][m]=1+lcs(a,b,n-1,m-1);
}
return dp[n][m]=max(lcs(a,b,n-1,m),lcs(a,b,n,m-1));
}
int longestCommonSubsequence(string a, string b)
{
int n=a.length();
int m=b.length();
memset(dp,-1,sizeof(dp));
return lcs(a,b,n,m);
}
};
```
​
```
Recursive-
​
class Solution {
public:
int LCS(string a,string b,int n,int m)
{
if(n==0||m==0)
return 0;
if(a[n-1]==b[m-1])
return (1+LCS(a,b,n-1,m-1));
return max(LCS(a,b,n-1,m),LCS(a,b,n,m-1));
}
int longestCommonSubsequence(string text1, string text2) {
int n=text1.size();
int m=text2.size();