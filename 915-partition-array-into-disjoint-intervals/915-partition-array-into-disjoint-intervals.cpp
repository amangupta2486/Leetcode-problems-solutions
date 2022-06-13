class Solution {
public:
    int partitionDisjoint(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> p(n,0),s(n,0);
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i]);
            p[i]=mx;
        }
        mx=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
           mx=min(mx,a[i]);
            s[i]=mx;
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(p[i]<=s[i+1])
            {
                return i+1;
            }
        }
        
        return 0;
    }
};