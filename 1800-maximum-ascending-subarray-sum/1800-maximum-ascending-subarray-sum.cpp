class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> p(n,0);
        
        p[0]=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            p[i]=p[i-1]+a[i];
            
            else
            p[i]=a[i];
        }
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            //cout<<p[i]<<" ";
            mx=max(mx,p[i]);
        }
        
        return mx;
    }
};