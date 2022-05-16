```
class Solution {
public:
int dx[8]={1,1,1,-1,-1,-1,0,0};
int dy[8]={0,1,-1,1,-1,0,1,-1};
int shortestPathBinaryMatrix(vector<vector<int>>& g) {
int n=g.size();
int m=g[0].size();
if(g[0][0]==1)
return -1;
int vis[n+1][m+1];
memset(vis,0,sizeof(vis));
queue<vector<int>> q;
q.push({0,0,1});
while(!q.empty())
{
int k=q.size();
while(k--)