class Solution {
public:
    int longestDecomposition(string s) {
        
        int n=s.size();
        
        int ans=0;
        string l="",r="";
        
        for(int i=0;i<n;i++)
        {
            l+=s[i];
            r=s[n-i-1]+r;
            
            if(l==r)
            {
                ans++;
                l="";
                r="";
            }
            
        }
        
        return ans;
    }
};