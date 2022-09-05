class Solution {
public:
    
    int ans=0;
    
    int vis[20];
    
    void solve(int j,vector<int>& a,int x,int s, int k)
    {
        if(k==1)
        {
            ans=1;
            return;
        }
        
        if(j>=a.size())
        {
            return;
        }
        
        if(x==s)
        {
            solve(0,a,0,s,k-1);
        }
        
        for(int i=j;i<a.size();i++)
        {
            if(vis[i] || x+a[i]>s)
            {
                continue;
            }
            
            vis[i]=1;
            
            solve(i+1,a,x+a[i],s,k);
            
            vis[i]=0;
        }
        
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
        
        solve(0,a,0,s,k);
        
        return ans;
    }
};