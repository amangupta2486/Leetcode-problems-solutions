class Solution {
public:
    
    bool check(string &s)
    {
        int n=s.size();
        int i=0,j=n-1;
        
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
    
    int countSubstrings(string s) {
        
        int n=s.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string b=s.substr(i,j-i+1);
                
                if(check(b))
                {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};