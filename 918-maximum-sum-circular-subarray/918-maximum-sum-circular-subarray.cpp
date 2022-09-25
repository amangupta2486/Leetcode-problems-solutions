class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        
        int n=a.size();
        
        int curr_min=100000,s=0,mi=100000,curr_max=-100000,mx=-100000;
        
        for(int i=0;i<n;i++)
        {
            curr_max=max(a[i],curr_max+a[i]);
            curr_min=min(a[i],curr_min+a[i]);
            mi=min(mi,curr_min);
            
            mx=max(mx,curr_max);
            
            s+=a[i];
        }
        
        return mx>0 ? max(s-mi,mx) : mx;
    }
};