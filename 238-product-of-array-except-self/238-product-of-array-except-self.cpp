class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> p(n,1),s(n,1);
        
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]*a[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            s[i]=s[i+1]*a[i+1];
        }
        
        for(int i=0;i<n;i++)
        {
            p[i]=p[i]*s[i];
        }
        
        return p;
    }
};

// 1 1 2 6
// 24  12  4 1