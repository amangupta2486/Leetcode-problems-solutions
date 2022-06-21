class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        
        int n=a.size();
        if(n<3)
        {
            return 0;
        }
        
        vector<int> p(n),s(n);
        p[0]=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<p[i-1])
            {
                p[i]=a[i];
            }
            else
            {
                p[i]=p[i-1];
            }
        }
        
        s[n-1]=a[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>s[i+1])
            {
                s[i]=a[i];
            }
            else
            {
                s[i]=s[i+1];
            }
        }
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>p[i-1] && a[i]<s[i+1])
            {
                return 1;
            }
        }
        
        return 0;
    }
};