class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        int n=a.size();
        
        int b=a[0];
        int c=a[0];
        int ans=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                swap(b,c);
            }
            
            b=max(a[i],a[i]*b);
            c=min(a[i],a[i]*c);
            
            ans=max(ans,b);
        }
        
        return ans;
    }
};