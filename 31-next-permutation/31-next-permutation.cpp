class Solution {
public:
    void nextPermutation(vector<int>& a) {
        
        int n=a.size();
        int i=n-1;
        int f=0;
        
        for(i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                //cout<<3<<endl;
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
                   // cout<<3<<endl;
                    swap(a[j],a[i]);
                    break;
                }
            }
        }
        
        if(f)
        {
            sort(a.begin()+i+1,a.end());
        }
        
        else
        sort(a.begin(),a.end());
    }
};