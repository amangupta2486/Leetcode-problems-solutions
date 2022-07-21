class Solution {
public:
    void nextPermutation(vector<int>& a) {
        
        int n=a.size();
        
        int i=n-2,f=0;
        
        for(;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                f=1;
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
        
        reverse(a.begin()+i+1,a.end());
        
    }
};