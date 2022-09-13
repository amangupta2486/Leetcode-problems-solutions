class Solution {
public:
    int numSteps(string s) {
        
        int n=s.size();
        
        int c=0;
        
        while(s!="1")
        {
            int m=s.size();
            
            if(s[m-1]=='1')
            {
                int f=0;
                
                for(int i=m-1;i>=0;i--)
                {
                    if(s[i]=='0')
                    {
                        f=1;
                        s[i]='1';
                        break;
                    }
                    else
                    {
                        s[i]='0';
                    }
                }
                
                if(f==0)
                {
                    s.insert(s.begin(),'1');
                }
            }
            
            else
            {
                s.pop_back();
            }
            
            c++;
        }
        
        return c;
    }
};