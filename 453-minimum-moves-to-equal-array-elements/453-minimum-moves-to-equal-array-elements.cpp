class Solution {
public:
    int minMoves(vector<int>& a) {
        
        int n=a.size();
        
        int mi=a[0];
        
        for(int i=0;i<n;i++)
        {
            mi=min(mi,a[i]);
        }
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i]-mi;
        }
        
        return s;
    }
};