class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int n=candies.size();
        
        int l=1,r=0;
        long long s=0;
        
        for(int i=0;i<n;i++)
        {
            r=max(r,candies[i]);
            s+=candies[i];
        }
        
        if(k>s)
        {
            return 0;
        }
        int ans=0;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            long long c=0;
            
            for(int i=0;i<n;i++)
            {
                c+=candies[i]/m;   
            }
            
            if(c<k)
            {
                r=m-1;
            }
            else
            {
                ans=m;
                l=m+1;
            }
        }
        
        return ans;
    }
};
/*
Input
[5,6,4,10,10,1,1,2,2,2]
9
Output
0
Expected
3
*/