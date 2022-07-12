class Solution {
public:
    int vis[20];
    int n;
    
    bool solve(int j,int s,int t,vector<int> &a,int k)
    {
        if(k==1)
        {
            return 1;
        }
        
        if(s==t)
        {
            if(solve(0,0,t,a,k-1))
            {
                return 1;
            }
        }
        if(j>=n)
        {
            return 0;
        }
        
        for(int i=j;i<n;i++)
        {
            if(a[i]+s>t || vis[i])
            {
                continue;
            }
            
            vis[i]=1;
            if(solve(i+1,s+a[i],t,a,k))
            {
                return 1;
            }
            vis[i]=0;
        }
        
        return 0;
    }
    
    bool makesquare(vector<int>& a) {
        
        n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s%4!=0)
        {
            return 0;
        }
        
        memset(vis,0,sizeof(vis));
        
        s=s/4;
        
        return solve(0,0,s,a,4);
    }
};