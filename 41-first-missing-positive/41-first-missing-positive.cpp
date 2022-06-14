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
            if(abs(a[i])-1>=0 && abs(a[i])-1<n && a[abs(a[i])-1]>0)
            {
                a[abs(a[i])-1]=-1*a[abs(a[i])-1];
            }
        }
        
        for(int i=0;i<n;i++)
        {
           // cout<<a[i]<<" ";
            if(a[i]>=0)
            {
                 //cout<<endl;
                return i+1;
            }
        }
       // cout<<endl;
        
        return n+1;
    }
};