class Solution {
public:
    string countAndSay(int n) {
        
        string s="1";
        
        while(n>1)
        {
            int c=1;
            
            int m=s.size();
            
            string t="";
            
            for(int i=0;i<m-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    c++;
                }
                else
                {
                    t+=c+'0';
                    t+=s[i];
                    
                    c=1;
                }
            }
            
            t+=c+'0';
            t+=s[m-1];
            
            s=t;
            
            n--;
        }
        
        return s;
    }
};