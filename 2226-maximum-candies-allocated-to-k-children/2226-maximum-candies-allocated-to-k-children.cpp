class Solution {
public:
    int maximumCandies(vector<int>& a, long long k) {
        
        long long s=0;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s<k)
        {
            return 0;
        }
        
        int l=1;
        int r=*max_element(a.begin(),a.end());
        
        
        long long ans=INT_MAX;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            long long c=0;
            
            for(int i=0;i<n;i++)
            {
                c+=a[i]/m;
            }
            
            if(c>=k)
            {
                ans=m;
                l=m+1;
            }
            
            else
            {
                r=m-1;
            }
        }
        
        return r;
    }
};

/*
Input
[5,6,4,10,10,1,1,2,2,2]
9
Output
4
Expected
3
*/