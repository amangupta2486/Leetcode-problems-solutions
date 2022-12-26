class Solution {
public:
    int ans=0;
    int vis[50005];
    void solve(int i,int n,vector<int>& a)
    {
        if(i<0 || i>=n)
        {
            return;
        }
        
        if(vis[i])
        {
            return;
        }
        
        if(a[i]==0)
        {
            ans=1;
        }
        
        vis[i]=1;
        
        solve(i+a[i],n,a);
        solve(i-a[i],n,a);
    }
    
    bool canReach(vector<int>& a, int start) {
        
        int n=a.size();
        solve(start,n,a);
        
        memset(vis,0,sizeof(vis));
        
        return ans;
    }
};