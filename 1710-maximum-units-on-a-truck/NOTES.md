```
class Solution {
public:
int maximumUnits(vector<vector<int>>& a, int t) {
int n=a.size();
sort(a.begin(),a.end(),[&](auto &a,auto &b){
return a[1]>b[1];
});
int ans=0;
for(int i=0;i<n;i++)
{
//cout<<a[i][1]<<" ";
if(t>0)
{
if(a[i][0]<=t)
{
t-=a[i][0];
ans+=(a[i][0]*a[i][1]);
}
else
{
ans+=(t*a[i][1]);
break;
}
}
}
//cout<<endl;
return ans;
}
};
```
​
```
class Solution {
public:
int maximumUnits(vector<vector<int>>& b, int t) {
int n=b.size();