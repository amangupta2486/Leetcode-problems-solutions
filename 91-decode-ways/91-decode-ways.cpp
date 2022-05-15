class Solution {
public:
    int numDecodings(string s) {
        
        int n=s.size();
        
        vector<int> dp(n+2,0);
        
        dp[n+1]=1;
        dp[n]=1;
        
        for(int i=n-1;i>=0;i--)
        {
            int op1=s[i]-'0';
            int op2;
            
            if(i+1<n)
            {
                op2= (10*op1) + (s[i+1]-'0');
            }
            
            if(op1>0)
            {
                dp[i]=dp[i+1];
            }
            
            if(op1>0 && op2>0 & op2<27)
            {
                dp[i]+=dp[i+2];
            }
        }
        
        return dp[0];
    }
};