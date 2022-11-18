class Solution {
public:
    int countPrimes(int n) {
        
        bool p[n+1];
        memset(p,true,sizeof(p));
        
        for(int i=2;i*i<n;i++)
        {
            if(p[i])
            {
                for(int j=i*i;j<n;j+=i)
                {
                   p[j]=false;
                }
            }
            
        }
        
        int cnt=0;
        
        for(int i=2;i<n;i++)
        {
            if(p[i])
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};