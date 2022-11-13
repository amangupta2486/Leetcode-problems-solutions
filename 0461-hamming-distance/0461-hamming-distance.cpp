class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ans=0;
        
        for(int i=0;i<32;i++)
        {
            int a=1<<i;
            
            if((x&a) != (y&a))
            {
                ans++;
            }
        }
        
        return ans;
    }
};