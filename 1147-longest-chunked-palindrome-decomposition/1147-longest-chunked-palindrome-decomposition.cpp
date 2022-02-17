class Solution {
public:
    int longestDecomposition(string s,int ans=0) {
        
        int n=s.size();
        
        for(int l=1;l<=n/2;l++)
        {
            if(s[0]==s[n-l] && s[l-1]==s[n-1])
            {
                if(s.substr(0,l) == s.substr(n-l))
                {
                   return longestDecomposition(s.substr(l,n-l-l) ,ans+2);
                }
            }
        }
        
        return n==0 ? ans : ans+1;
    }
};