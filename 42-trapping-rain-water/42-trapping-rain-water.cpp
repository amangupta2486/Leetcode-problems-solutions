class Solution {
public:
    int trap(vector<int>& h) {
        
        int n=h.size();
        
        int ans=0;
        
        vector<int> l(n,0),r(n,0);
        
        for(int i=1;i<n;i++)
        {
            l[i]=max(l[i-1],h[i-1]);
        }

        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(r[i+1],h[i+1]);
        }
        
        for(int k=0;k<n;k++)
        {
            int x=min(l[k],r[k]);
            
            if(x>=h[k])
            {
                ans+=x-h[k];
            }
        }
        
        return ans;
    }
};