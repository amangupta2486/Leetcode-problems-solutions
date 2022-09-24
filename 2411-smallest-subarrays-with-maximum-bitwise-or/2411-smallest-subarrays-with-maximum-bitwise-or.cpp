class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> last(32,0);
        vector<int> ans(n,1);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<32;j++)
            {
                int x=1<<j;
                
                if(a[i]&x)
                {
                    last[j]=i;
                }
                
                ans[i]=max(ans[i],last[j]- i +1);
            }
        }
        
        return ans;
    }
};