class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        int n=a.size();
        
        int curr_mx=a[0],curr_mi=a[0];
        int ans=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                swap(curr_mx,curr_mi);
            }
            
            curr_mx=max(a[i],curr_mx*a[i]);
            curr_mi=min(a[i],curr_mi*a[i]);
            
            ans=max(ans,curr_mx);
        }
        
        return ans;
    }
};