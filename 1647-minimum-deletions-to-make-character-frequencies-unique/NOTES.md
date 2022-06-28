```
class Solution {
public:
int minDeletions(string s) {
int n=s.length();
int ar[26];
memset(ar,0,sizeof(ar));
for(int i=0;i<n;i++)
{
ar[s[i]-'a']++;
}
int ans=0;
unordered_map<int,int> mp;
for(int i=0;i<26;i++)
{
int val=ar[i];
while(mp[val]>0&&val!=0)
{
val--;
}
mp[val]++;
ans+=abs(ar[i]-val);
}
return ans;
}
};
```