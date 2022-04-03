class Solution {
public:
    void nextPermutation(vector<int>& a) {
        
        int n=a.size();
        
        int f=0;
        
        int i=n-2;
        
        for(;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                f=1;
               // i++;
                break;
            }
        }
        
        if(f)
        {
            for(int j=n-1;j>i;j--)
            {
                if(a[j]>a[i])
                {
                    swap(a[j],a[i]);
                    break;
                }
            }
        }
        cout<<i<<" ";
        
        if(f)
        {
            sort(a.begin()+i+1,a.end());
        }
        
        else
        sort(a.begin(),a.end());
    }
};