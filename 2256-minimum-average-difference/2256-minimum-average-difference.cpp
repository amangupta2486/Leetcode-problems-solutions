class Solution {
public:
    int minimumAverageDifference(vector<int>& a) {
        
        int n=a.size();
        
        if(n==1)
        {
            return 0;
        }

        long long s=0,t=0;
        
        for(int i=0;i<n;i++)
        {
            t+=a[i];
        }
        
        int ans=INT_MAX;
        int idx=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            long long z=t-s;
            long long x=0;
            if(i!=n-1)
            x=z/(n-i-1);
            
            long long y=s/(i+1);
            
            //cout<<abs(x-y)<<" ";
            if(ans>abs(x-y))
            {
                ans=abs(x-y);
                idx=i;
            }
        }
        
        //cout<<endl;
        
        return idx;
    }
};