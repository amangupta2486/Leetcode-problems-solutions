class Solution {
public:
    int myAtoi(string s) {
        
        long long a=0;
        int f=1;
        int n=s.size();
        int start=0,y=0,g=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='-' && y==0)
            {
                if(g && a==0)
                {
                    break;
                }
                g=1;
                
                f=-1;
                continue;
            }
            if(s[i]==' ' || s[i]=='+' )
            {
                if(y || g)
                {
                    break;
                }
                if(s[i]=='+')
                {
                    if(g && a==0)
                    {
                        break;
                    }
                    g=1;
                }
                continue;
            }
            if(s[i]>='0' && s[i]<='9')
            {
                if(y==0)
                {
                    start=i;
                    y=1;
                }
                
                a*=10;
                a+=s[i]-'0';        
                
                if(f*a<=INT_MIN || a>=INT_MAX)
                {
                    if(f*a<=INT_MIN)
                    {
                        f=1;
                        a=INT_MIN;
                    }
                    else 
                    {
                        a=INT_MAX;
                    }
                    break;
                }
            }
            else
            {
                break;
            }
        }
        
        return f*a;
    }
};