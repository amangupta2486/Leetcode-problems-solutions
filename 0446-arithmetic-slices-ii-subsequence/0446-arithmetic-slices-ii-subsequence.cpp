#define ll long long

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
        int n=a.size();
        
        vector<unordered_map<ll,int>> dp(n);
        
        int ans=0;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                ll d=(ll)a[i]-(ll)a[j];
                
                int sum=0;
                
                if(dp[j].find(d)!=dp[j].end())
                {
                    sum=dp[j][d];
                }
                
                dp[i][d]+= sum+1;
                
                ans+=sum;
            }
        }
        
        return ans;
    }
};