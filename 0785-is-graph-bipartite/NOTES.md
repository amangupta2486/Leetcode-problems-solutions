Input
[[4],[],[4],[4],[0,2,3]]
Output
false
Expected
true
​
​
```
LOGIC :- If graph is bipartite you can colour all the nodes with starting from ( 0 or 1) such that no two adjacent nodes have same colour.
​
WORKING :- We will colour the source as 1 and all its adjacent nodes with 0 ,and while doing this if we found that if any two adjacent nodes have same colour we will return false (means the graph couldn't be coloured so it can't be a bipartite graph) else return true means graph is bipartite beacause we have succesfully colored acoording to logic stated above.
​
class Solution {
public:
bool dfs(vector<vector<int>>& adj,vector<int>&colour, int src) // function to perform dfs
{
for(auto node:adj[src]) //checking adjacent nodes of given source or starting node or parent
{
if(colour[node]==-1) // if they are not coloured