class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                a[i]=n+1;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int idx=abs(a[i]);
            if(idx>0 && idx<=n && a[idx-1]>0)
            {
                a[idx-1]=-1*a[idx-1];
            }
        }
        
         // for(int i=0;i<n;i++)
         // {
         //     cout<<a[i]<<" ";
         // }
         //  cout<<endl;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                return i+1;
            }
        }
        
        return n+1;
    }
};