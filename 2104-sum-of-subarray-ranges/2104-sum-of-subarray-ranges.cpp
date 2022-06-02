class Solution {
public:
    long long subArrayRanges(vector<int>& a) {
        
        int n=a.size();
        
        long long ans=0;
        
        for(int i=0;i<n;i++)
        {
            int mx=a[i];
            int mi=a[i];
            for(int j=i+1;j<n;j++)
            {
                mx=max(mx,a[j]);
                mi=min(mi,a[j]);
                
                ans+=mx-mi;
            }
        }
        
        return ans;
    }
};