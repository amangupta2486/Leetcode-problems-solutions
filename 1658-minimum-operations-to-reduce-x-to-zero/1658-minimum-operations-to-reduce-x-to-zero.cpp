class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        
        int n=a.size();
        int i=0,j=0;
        int ans=INT_MAX;
        int f=0;
        
        vector<int> p(n+1,0);
        int s=0;
        
        for(int i=1;i<=n;i++)
        {
            p[i]+=p[i-1]+a[i-1];
            s+=a[i-1];
        }
        
        while(i<=n && j<=i)
        {
            int d=p[i]-p[j];
            int y=s-d;
           // cout<<y<<" ";
            if(y==x)
            {
                ans=min(ans,n-(i-j));
                j++;
            }
            
            else if(y>x)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};