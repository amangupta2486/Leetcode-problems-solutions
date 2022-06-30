Wrong Answer
Details
Input
[186,419,83,408]
6249
Output
-1
Expected
20
​
```
class Solution {
public:
int coinChange(vector<int>& c, int a) {
int n=c.size();
int dp[a+1];
dp[0]=0;
int ans=0;
for(int i=1;i<=a;i++)
{
int ans=INT_MAX;
for(int j=0;j<c.size();j++)
{
if(c[j]<=i)
{
ans=min(ans,dp[i-c[j]]);
}
}
if(ans==INT_MAX)
{
dp[i]=INT_MAX;
}