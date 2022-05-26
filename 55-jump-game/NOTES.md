int l=0;
for(int i=0;i<n;i++)
{
if(l==n-1)
{
return true;
}
l=max(l,i+a[i]);
}
return false;
}
};
```
​
```
class Solution {
public:
bool canJump(vector<int>& nums) {
int n=nums.size();
int goodindex=n-1;
if(n==1)
return 1;
for(int i=n-2;i>=0;i--)
{
if(i+nums[i]>=goodindex)
{
goodindex=i;
}
}
return goodindex==0;
}
};
```