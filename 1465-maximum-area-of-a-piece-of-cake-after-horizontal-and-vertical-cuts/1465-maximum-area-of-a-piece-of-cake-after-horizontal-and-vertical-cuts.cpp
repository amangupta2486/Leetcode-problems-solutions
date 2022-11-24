class Solution {
public:
    int maxArea(int x, int y, vector<int>& h, vector<int>& v) {
        
        h.push_back(0);
        h.push_back(x);
        
        v.push_back(0);
        v.push_back(y);

        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        
        int n=h.size();
        int m=v.size();
        
        long long l=0,r=0;
        
        for(int i=0;i<n-1;i++)
        {
            l=max(l,(h[i+1]-h[i])*1ll);
        }
        
        for(int i=0;i<m-1;i++)
        {
            r=max(r,(v[i+1]-v[i])*1ll);
        }
        
        int mod=1e9 +7;
        
        long long ans=(l*r)%mod;
        
        return ans;
    }
};