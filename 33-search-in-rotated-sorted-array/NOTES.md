```
class Solution {
public:
int search(vector<int>& a, int t) {
int n=a.size();
int l=0,r=n-1;
while(l<=r)
{
int m=(l+r)>>1;
if(a[m]==t)
{
return m;
}
else if(a[m]>=a[l])
{
if(t>=a[l] && t<a[m])
{
r=m-1;
}
else
{
l=m+1;
}
}
else
{
if(t>a[m] && t<=a[r])
{
l=m+1;
}
else
{
r=m-1;
}
}
}
return -1;
}
};
```
​
​
```
class Solution {
public:
int search(vector<int>& a, int t) {
int n=a.size();
int l=0,h=n-1;
while(l<=h)
{
int m = (l+h)>>1;
if(a[m]==t)
{
return m;
}
if(a[l]<=a[m])
{
if(t>=a[l] && t<=a[m])
{
h=m-1;
}
else
{
l=m+1;
}
}
else
{
if(t>=a[m] && t<=a[h])
{
l=m+1;
}
else
{
h=m-1;
}
}
}
return -1;
}
};
```
```
class Solution {
public:
int search(vector<int>& nums, int target) {
int left = 0 , right= nums.size()-1;
while(left<= right)
{
int mid = (left + right)/2;
if(nums[mid] == target)
{
return mid;
}
else if(nums[mid]>=nums[left])
{
if(target>=nums[left] && target<nums[mid])
{
right = mid-1;
}
else
{
left = mid+1;
}
}
else
{
if(target > nums[mid] && target <= nums[right])
{
left=mid+1;
}
else
{
right=mid-1;
}
}
}
return -1;
}
};
```
​
​