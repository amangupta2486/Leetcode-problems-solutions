class Solution {
public:
    
    bool check(string s ,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }       
            i++;
            j--;
        }
        
        return true;
    }
    
    int countSubstrings(string s) {
        
        int n=s.size();
        
        int c=n;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(check(s,i,j))
                {
                    c++;
                }
            }
        }
        
        return c;
    }
};