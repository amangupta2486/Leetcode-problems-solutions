class Solution {
public:
    
    bool check(int i,int j,string s)
    {
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
        
        int f=1;
        
        int j=n-1;
        int i=0;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                if(check(i,j-1,s)&& f==1)
                {
                    return 1;
                }
                else if(check(i+1,j,s) && f==1)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
                f=0;
            }

            i++;
            j--;
        }

        return 1;
    }
};