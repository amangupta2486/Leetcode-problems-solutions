class Solution {
public:
    vector<int> runningSum(vector<int>& rsum) {
        
        int n=rsum.size();
        
        for(int i=1;i<n;i++)
        {
            rsum[i]+=rsum[i-1];
        }
        
        return rsum;
    }
};