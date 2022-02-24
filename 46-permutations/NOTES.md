```
class Solution {
public:
vector<vector<int>> permute(vector<int>& a){
int n=a.size();
vector<vector<int>> ans;
sort(a.begin(),a.end());
do{
ans.push_back(a);
}while(next_permutation(a.begin(),a.end()));
return ans;
}
};
```
​
class Solution {
public:
vector<vector<int>> permute(vector<int>& nums) {
int n=nums.size();
vector<vector<int>>v;
int total=pow(2,n);
​