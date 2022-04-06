int ans=INT_MAX;
while(!q.empty())
{
auto r=q.front();
q.pop();
int c=r.second;
string p=r.first;
c++;
if(p==b)
{
ans=min(ans,c);
}
for(int i=0;i<p.size();i++)
{
string s=p;
for(int j=0;j<26;j++)
{
s[i]='a'+j;
//cout<<s<<" ";
if(m[s])
{
m[s]=0;
q.push({s,c});
}
}
}
}
if(ans!=INT_MAX)
{
return ans;
}
return 0;
}
};
```