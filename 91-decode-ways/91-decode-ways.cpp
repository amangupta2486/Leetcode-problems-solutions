class Solution {
public:
    int numDecodings(string s) {
        
        int n=s.size();
        
        vector<int> dp(n+1,0);
        
        dp[n]=1;
        
        for(int i=n-1;i>=0;i--)
        {
            int op1=s[i]-'0';
            int op2=0;
            
            if(i<n-1)
            {
                op2= (s[i]-'0')*10 + (s[i+1]-'0');
            }
            
            if(op1)
            {
                dp[i]=dp[i+1];
            }
            
            if(op1!=0 && op2!=0 && op2<=26)
            {
                //cout<<op2<<endl;
                dp[i]+=dp[i+2];
            }
        }
        
        return dp[0];
    }
};