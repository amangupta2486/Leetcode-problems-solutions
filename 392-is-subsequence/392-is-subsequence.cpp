class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        int j=0;
        
        for(int i=0;i<m;i++)
        {
            if(t[i]==s[j] && j<n)
            {
                j++;
            }
        }
        
        return j==n;
    }
};