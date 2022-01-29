```
class Solution {
public:
int largestRectangleArea(vector<int>& h) {
int n=h.size();
vector<int> l(n,0),r(n,0);
stack<int> s;
int i=0,ans=0;
while(i<n)
{
while(!s.empty() && h[s.top()]>=h[i])
{
s.pop();
}
if(s.empty())
{
l[i]=0;
}
else
{
l[i]=s.top()+1;
}
s.push(i);
i++;
}
while(!s.empty())