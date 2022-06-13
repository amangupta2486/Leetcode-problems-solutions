{
mi=min(mi,dp[i+1][j]);
}
dp[i][k]+=mi;
}
cout<<endl;
k++;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<dp[i][j]<<" ";
}
cout<<endl;
}
int mi=INT_MAX;
for(int i=0;i<n;i++)
{
mi=min(mi,dp[0][i]);
}
return mi;
}
};
```