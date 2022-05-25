class Solution {
public:
    
    bool v[500005];
    
    int firstMissingPositive(vector<int>& a) {
        
        int n=a.size();
        
        memset(v,0,sizeof(v));
    
        for(int i=0;i,i<n;i++)
        {
            if(a[i]>0 && a[i]<500001)
            {
                v[a[i]]=1;
            }
        }

        for(int i=1;i<=500000;i++)
        {
            if(v[i]==0)
            {
                return i;
            }
        }

        return 500001;
    }
};