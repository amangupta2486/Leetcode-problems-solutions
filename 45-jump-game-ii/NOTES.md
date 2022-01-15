```
class Solution {
public:
int jump(vector<int>& a) {
int s=0,end=0,far=0,jump=0;
int n=a.size();
for(int i=0;i<n-1;i++)
{
far=max(far,i+a[i]);
if(i==end)
{
cout<<far<<" ";
end=far;
jump++;
}
}
cout<<endl;
return jump;
}
};
```
​
```
class Solution {
public:
int jump(vector<int>& nums) {
int n=nums.size();
int jumps[n];