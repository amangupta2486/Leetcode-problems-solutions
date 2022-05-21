class Solution {
public:
    
    bool check(string &s)
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
    
    bool validPalindrome(string s) {
        
        int n=s.size();
        
        int ans=check(s);
        
        if(ans)
        {
            return 1;
        }
        
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                string a=s,b=s;
                
                a.erase(a.begin()+i);
                b.erase(b.begin()+n-i-1);
                
                // cout<<a<<endl;
                // cout<<b<<endl;
                if(check(a) || check(b))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }

        }
        
        return 0;
    }
};