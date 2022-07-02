class Solution {
public:

    int n;
    
    int vis[20];
    
    bool solve(int j,int s,int t,vector<int>& a,int k)
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
            if(solve(0,0,t,a,k-1))
            {
                return 1;
            }
        }
        

        for(int i=j;i<n;i++)
        {
           if(s+a[i]>t || vis[i])
           {
               continue;
           }
            
            vis[i]=1;
            if(solve(i+1,s+a[i],t,a,k))
            {
                return true;
            }
            vis[i]=0;
            
        }
        
        
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& a, int k) {
        
        n=a.size();
        
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

        return solve(0,0,s,a,k);
        
    }
};
/*
Input
[4,4,6,2,3,8,10,2,10,7]
4
stdout
3

Output
false
Expected
true

[2,2,2,2,3,4,5]
4
*/