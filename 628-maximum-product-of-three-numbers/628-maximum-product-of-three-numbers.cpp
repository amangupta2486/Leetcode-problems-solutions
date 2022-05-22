class Solution {
public:
    int maximumProduct(vector<int>& a) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int l=1,r=1;
        
        for(int i=0;i<2;i++)
        {
            l*=a[i];
        }
        l*=a[n-1];
        
        for(int i=n-3;i<n;i++)
        {
            r*=a[i];
        }
       // cout<<l<<" "<<r<<endl;
        return max(l,r);
    }
};