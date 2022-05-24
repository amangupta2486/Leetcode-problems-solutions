

class Solution {
public:
    
    int countPrimes(int n) {
        
        int ans=0;
        
        vector<int> p(n,0);
        
        for(int i=2;i*i<n;i++)
        {
            if(!p[i])
            {
                for(int j=i*i;j<n;j+=i)
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
        
        return ans;
    }
};