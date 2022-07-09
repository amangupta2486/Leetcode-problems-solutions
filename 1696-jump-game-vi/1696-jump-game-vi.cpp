class Solution {
public:
    
    int maxResult(vector<int>& a, int k) {
        
        int n=a.size();
        
        vector<int> dp(n+1,INT_MIN);
        dp[0]=a[0];
        
        multiset<int> s;
        s.insert(a[0]);
        
        for(int i=1;i<n;i++)
        {
            if(i>k)
            {
                s.erase(s.find(dp[i-k-1]));
            }
            
            dp[i] = *s.rbegin()+a[i];
            
            s.insert(dp[i]);
        }
        
        return dp[n-1];
    }
};