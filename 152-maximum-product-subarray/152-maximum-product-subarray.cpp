class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        int n=a.size();
        
        int mx=a[0],mi=a[0],ans=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                swap(mx,mi);
            }
            
            mx=max(a[i],mx*a[i]);
            mi=min(a[i],mi*a[i]);
            
            ans=max(ans,mx);
        }
        
        return ans;
    }
};