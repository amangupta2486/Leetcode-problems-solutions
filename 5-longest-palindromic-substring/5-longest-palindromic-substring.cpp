class Solution {
public:
    
    int solve(string &s,int i,int j)
    {
        int n=s.size();
        
        while(i>=0 && j<n && s[i]==s[j])
        {
            i--;
            j++;
        }
        
        return j-i-1;
    }
    string longestPalindrome(string s) {
        
        int n=s.size();
        int ans=0,st=0,end=0;
        
        for(int i=0;i<n;i++)
        {
            int l=solve(s,i,i);
            int r=0;
            if(r<n-1)
            r=solve(s,i,i+1);
            
            int len=max(l,r);
            //cout<<len<<" ";
            if(len>ans)
            {
                st=i-((len-1)/2);
                ans=len;
            }
        }
        
        return s.substr(st,ans);
    }
};