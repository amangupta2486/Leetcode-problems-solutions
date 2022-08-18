class Solution {
public:
    int maxArea(int h, int w, vector<int>& x, vector<int>& y) {
        
        x.push_back(0);
        x.push_back(h);
        
        y.push_back(0);
        y.push_back(w);
        
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        
        long long l=0,b=0;
        
        for(int i=0;i<x.size()-1;i++)
        {
            l=max(l,(x[i+1]-x[i])*1ll);
        }
        
        for(int i=0;i<y.size()-1;i++)
        {
            b=max(b,(y[i+1]-y[i])*1ll);
        }
        
        long long ans=l*b*1ll;
        
        int mod=1e9+7;
        
        return ans%mod;
    }
};