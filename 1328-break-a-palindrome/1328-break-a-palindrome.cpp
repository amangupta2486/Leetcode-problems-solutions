class Solution {
public:
    
    int solve(string &s)
    {
        int n=s.size();
        int i=0,j=n-1,c=0;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                c++;
            }
            i++;
            j--;
        }
        
        return c;
    }
    
    int ans=0;
    
    void find(string &s)
    {
        int n=s.size();
        int i=0,j=n-1,c=0;
        
        char ch='z';
        
    
        for(int i=0;i<n/2;i++)
        {
            for(char j='a';j<s[i];j++)
            {
                s[i]=j;
                ans=1;
                break;
            }
            
            if(ans)
            {
                break;
            }
        }
        
        if(ans==0)
        {
            for(int i=n-1;i>=0;i--)
            {
                for(char j=s[i]+1;j<='z';j++)
                {
                    s[i]=j;
                    ans=1;
                    break;
                }

                if(ans)
                {
                    break;
                }
            }
        }
        
    }
    
    string breakPalindrome(string p) {
        
        int n=p.size();
        
        int c=solve(p);
        
        if(c>1)
        {
            return "";
        }
        
        find(p);
        
        if(ans==0 || p.size()==1)
        {
            return "";
        }
        
        return p;
    }
};