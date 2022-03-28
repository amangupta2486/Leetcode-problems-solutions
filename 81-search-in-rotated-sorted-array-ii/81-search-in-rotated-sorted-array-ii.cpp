class Solution {
public:
    bool search(vector<int>& a, int t) {
        int n=a.size();
        
        int j=0;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[j])
            {
                j++;
                a[j]=a[i];
            }
        }
        
        int l=0,h=j;
        
        while(l<=h)
        {
            int m=(l+h)/2;
            
            if(a[m]==t)
            {
                return 1;
            }
            
            if(a[m]>=a[l])
            {
                if(t>=a[l] && t<=a[m])
                {
                   h=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
            
            else
            {
                if(t<=a[h] && t>=a[m])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
        }
        
        return 0;
    }
};


// Input
// [1,0,1,1,1]
// 0
// Output
// false
// Expected
// true