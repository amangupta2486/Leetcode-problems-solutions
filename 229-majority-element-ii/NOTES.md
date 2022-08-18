[3,2,3]
[1]
[1,2]
[2,2,1,3]
[3,3,4]
[2,2]
[2,1,1,3,1,4,5,6]
​
```
class Solution {
public:
vector<int> majorityElement(vector<int>& a) {
int n=a.size();
int num1=-1,num2=-1,c1=0,c2=0;
for(int i=0;i<n;i++)
{
if(num1==a[i])
{
c1++;
}
else if(num2==a[i])
{
c2++;
}
else if(c1==0)
{
num1=a[i];
c1=1;
}
else if(c2==0)
{
num2=a[i];
c2=1;
}
else
{
c1--;
c2--;
}