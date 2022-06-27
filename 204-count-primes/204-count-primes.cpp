class Solution {
public:
    
    void solve(int n,int &ans)
    {
        vector<int> p(n+1,0);
        
        for(int i=2;i*i<n;i++)
        {
            if(p[i]==0)
            {
                for(int j=i+i;j<n;j+=i)
                {
                    p[j]=1;
                }
            }
        }
        
        for(int i=2;i<n;i++)
        {
            if(p[i]==0)
            {
                ans++;
            }
        }
    }
    int countPrimes(int n) {
        
        int ans=0;
        
        solve(n,ans);
        
        return ans;
    }
};