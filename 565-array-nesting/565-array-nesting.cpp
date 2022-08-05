class Solution {
public:
    int arrayNesting(vector<int>& a) {
        
        int n=a.size();
        int res=0;
        
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            
            int idx=a[i];
            int ans=0;

            while(!vis[idx])
            {
                vis[idx]=1;
                idx=a[idx];
                ans++;
            }
            
            res=max(res,ans);
        }
        
        
        return res;
    }
};