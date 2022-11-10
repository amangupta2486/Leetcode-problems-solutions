class Solution {
public:
    
    int ans=0;
    
    int vis[50005];
    
    void solve(int i,int n,vector<int>& a)
    {
        if(a[i]==0)
        {
            ans=1;
        }
        
        if(vis[i])
        {
            return;
        }
        
        vis[i]=1;
        
        if(i-a[i]>=0)
        solve(i-a[i],n,a);
        
        if(i+a[i]<n)
        solve(i+a[i],n,a);
        
    }
    
    bool canReach(vector<int>& a, int start) {
        
        int n=a.size();
        
        memset(vis,0,sizeof(vis));
        
        solve(start,n,a);
        
        return ans;
    }
};