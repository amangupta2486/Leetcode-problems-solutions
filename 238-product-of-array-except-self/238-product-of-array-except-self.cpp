class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> p(n,1);
        
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]*a[i-1];
        }
        
        int sp=1;
        for(int i=n-2;i>=0;i--)
        {
            sp*=a[i+1];
            p[i]*=sp;
        }
        
        return p;
    }
};