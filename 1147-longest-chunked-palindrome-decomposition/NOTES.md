```
int longestDecomposition(string S, int res = 0) {
int n = S.length();
for (int l = 1; l <= n / 2; ++l)
if (S[0] == S[n - l] && S[l - 1] == S[n - 1])
if (S.substr(0, l) == S.substr(n - l))
return longestDecomposition(S.substr(l, n - l - l), res + 2);
return n ? res + 1 : res;
}
```
​
```
class Solution {
public:
int longestDecomposition(string s) {
int n=s.size();
int ans=0;
string l="",r="";
for(int i=0;i<n;i++)
{
l+=s[i];
r=s[n-i-1]+r;