class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        int n=a.size();
        
        int b=a[0],c=a[0],mx=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                swap(b,c);
            }
            
            b=max(a[i],b*a[i]);
            c=min(a[i],c*a[i]);
            
            mx=max(mx,b);
        }
        
        return mx;
    }
};