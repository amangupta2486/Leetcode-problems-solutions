class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        
        int mi=a[0];
        
        for(auto x:a)
        {
            mi=min(mi,x);
        }
        
        return mi;
    }
};