```
class Solution {
public:
vector<int> findMinHeightTrees(int n, vector<vector<int>>& e) {
vector<vector<int>> v(n);
vector<int> in(n,0);
for(auto i:e)
{
v[i[0]].push_back(i[1]);
v[i[1]].push_back(i[0]);
in[i[0]]++;
in[i[1]]++;
}
queue<int> q;
vector<int> ans;
for(int i=0;i<n;i++)
{
if(in[i]==1)
{
q.push(i);
ans.push_back(i);
in[i]--;
}
}
while(!q.empty())
{