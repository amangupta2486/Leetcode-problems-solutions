class Solution {
public:
    int maxArea(int h, int w, vector<int>& ho, vector<int>& v) {
        
        int n=ho.size();
        int m=v.size();
        
        sort(ho.begin(),ho.end());
        sort(v.begin(),v.end());
        
        ho.insert(ho.begin(),0);
        v.insert(v.begin(),0);
        ho.push_back(h);
        v.push_back(w);
        
        long long l=0,b=0,mod=1e9+7;
        
        for(int i=0;i<=n;i++)
        {
            l=max(l,(ho[i+1]-ho[i])*1ll);
            //cout<<l<<" ";
            l%=mod;
        }
        //cout<<endl;
        for(int i=0;i<=m;i++)
        {
            b=max(b,(v[i+1]-v[i])*1ll);
            //cout<<b<<" ";
            b%=mod;
        }
        //cout<<endl;
        
        return (l*b)%mod;       
    }
};