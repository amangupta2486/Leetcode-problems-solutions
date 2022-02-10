class Solution {
public:
    vector<int> getAverages(vector<int>& a, int k) {
        
        int n=a.size();
        
        vector<long> p(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        vector<int> v(n,-1);
        
        for(int i=k;i<n-k;i++)
        {
            long s=p[i+k+1]-p[i-k];
            //cout<<s<<" ";
            int m=(2*k)+1;
            
            v[i]=(s/m);
        }
        
        return v;
    }
};