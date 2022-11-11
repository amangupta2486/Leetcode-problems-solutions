```
T ;- O(n)
Space :- N
class Solution {
public:
int p[1005];
int find(int node)
{
while(p[node]!=node)
{
node=p[node];
}
return node;
}
void qunion(int i,int j)
{
int a=find(i);
int b=find(j);
if(a!=b)
{
p[b]=a;