class Solution {
public:
    long long minimumRemoval(vector<int>& a) {
        
        long n=a.size();
        
        sort(a.begin(),a.end());
        
        long long ans=LLONG_MAX;
        
        long long s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            long long b=(n-i)*a[i]*1ll;
            ans=min(ans,s-b);
        }
        
        return ans;
    }
};