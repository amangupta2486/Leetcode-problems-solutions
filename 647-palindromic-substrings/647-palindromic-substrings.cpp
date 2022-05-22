class Solution {
public:
    
    bool check(string s)
    {
        int n=s.size();
        
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    
    bool solve(string s,int i,int j)
    {
        string b=s.substr(i,j-i+1);
        
        if(check(b))
        {
            return 1;
        }
        
        return 0;
    }
    int countSubstrings(string s) {
        
        int n=s.size();
        int ans=n;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {    
                if(solve(s,i,j))
                {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};