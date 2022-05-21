class Solution {
public:
    int minMoves(vector<int>& a) {
        
        int n=a.size();
        
        int mi=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            mi=min(mi,a[i]);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            ans+=a[i]-mi;
        }
        
        return ans;
    }
};