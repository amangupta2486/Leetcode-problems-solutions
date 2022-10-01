class Solution {
public:
    int maxSubArray(vector<int>& a) {
        
        int n=a.size();
        
        int mx=a[0],curr=a[0];
        
        for(int i=1;i<n;i++)
        {
            curr=max(a[i],curr+a[i]);
            
            mx=max(mx,curr);
        }
        
        return mx;
    }
};