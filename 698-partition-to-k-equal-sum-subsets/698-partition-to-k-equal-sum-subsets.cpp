class Solution {
public:
    
    int vis[20];
    
    bool solve(int j,int s,int n,int t,vector<int>& a,int k)
    {
        if(k==1)
        {
            return 1;
        }
        
        if(j>=n)
        {
            return 0;
        }
        
        if(s==t)
        {
            if(solve(0,0,n,t,a,k-1))
            {
                return 1;
            }
        }
        
        for(int i=j;i<n;i++)
        {
            if(a[i]+s>t || vis[i])
            {
                continue;
            }
            
            vis[i]=1;
            
            if(solve(i+1,s+a[i],n,t,a,k))
            {
                return 1;
            }
            
            vis[i]=0;
        }
        
        return 0;
    }
    
    bool canPartitionKSubsets(vector<int>& a, int k) {
        
        int n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s%k!=0)
        {
            return 0;
        }
        
        s=s/k;
        
        memset(vis,0,sizeof(vis));
        
        return solve(0,0,n,s,a,k);
    }
};