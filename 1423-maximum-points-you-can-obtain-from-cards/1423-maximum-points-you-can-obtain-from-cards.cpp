class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        
        int n=a.size();
        
        vector<int> p(n+1,0),s(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        int sum=0;
        
        for(int j=n-1;j>=0;j--)
        {
            sum+=a[j];
            s[j]=s[j+1]+a[j];
        }
        
        int i=0,j=n-k,ans=0;
        
        while(i<=n && j<=n)
        {
            int x=p[j]-p[i];
            
            ans=max(ans,sum-x);
            
            i++;
            j++;
        }
        
        return ans;
    }
};