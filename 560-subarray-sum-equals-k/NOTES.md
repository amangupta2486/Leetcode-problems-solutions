```
Using Hashmap
​
class Solution {
public:
int subarraySum(vector<int>& a, int k) {
int n=a.size();
map<int,int> m;
m[0]=1;
int s=0,ans=0;
for(int i=0;i<n;i++)
{
s+=a[i];
if(m[s-k])
{
ans+=m[s-k];
}
m[s]++;
}
return ans;