class Solution {
public:
    int titleToNumber(string s) {
        
        int ans=0;
        int x=0;
        int n=s.size();
        
        for(int i=n-1;i>=0;i--)
        {
            ans+=(s[i]-'A'+1)*pow(26,x);
            x++;
        }
        
        return ans;
    }
};