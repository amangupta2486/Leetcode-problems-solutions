class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<25;i<j++)
            {
                int f=1<<j;
                
                if(f&i)
                {
                    v[i]++;
                }
            }
        }
        
        return v;
    }
};