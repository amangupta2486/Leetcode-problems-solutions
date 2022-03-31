{
for(int j=0;j<m;j++)
{
int k=0;
while(j+k<m && i+k<n && a[j+k]==b[j+k])
{
k++;
}
ans=max(ans,k);
}
// ans=max(ans,c);
}
return ans;
}
};
​
​
// Input
// [69,51,94,52,72,74,65,65,99,1]
// [65,99,82,27,43,95,9,20,13,99]
// Output
// 1
// Expected
// 2
```