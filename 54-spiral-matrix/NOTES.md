class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& matrix) {
int m=matrix.size();
int n=matrix[0].size();
int m_start=0;
int m_end=m-1;
int n_start=0;
int n_end=n-1;
vector<int> v;
while(m_start<=m_end && n_start<=n_end)
{
for(int i=n_start;i<=n_end;i++)
{
v.push_back(matrix[m_start][i]);
}
for(int i=m_start+1;i<=m_end-1;i++)
{
v.push_back(matrix[i][n_end]);
}
if(m_start!=m_end)
{
for(int i=n_end;i>=n_start;i--)
{
v.push_back(matrix[m_end][i]);
}
}
if(n_start!=n_end)
{
for(int i=m_end-1;i>=m_start+1;i--)
{
v.push_back(matrix[i][n_start]);
}
}
m_start++;
m_end--;