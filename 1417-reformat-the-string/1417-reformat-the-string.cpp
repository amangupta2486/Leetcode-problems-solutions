class Solution {
public:
    string reformat(string s) {
        
        int n=s.size();
        
        vector<char> d,al;
        
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'0';
            
            if(x>=0 && x<=9)
            {
                d.push_back(s[i]);
            }
            else
            {
                al.push_back(s[i]);
            }
        }
        
        int x=d.size();
        int y=al.size();
        
        if(abs(x-y)>1)
        {
            return "";
        }
        
        string ans="";
        
        if(x>y)
        {
            int i=0,j=0;
            
            int f=1;
            
            while(i<x || j<y)
            {
                if(f)
                {
                    ans+=d[i];
                    i++;
                }
                else
                {
                    ans+=al[j];
                    j++;
                }
                
                f^=1;
            }
        }
        else
        {
            int i=0,j=0;
            
            int f=1;
            
            while(i<y || j<x)
            {
                if(f)
                {
                    ans+=al[i];
                    i++;
                }
                else
                {
                    ans+=d[j];
                    j++;
                }
                
                f^=1;
            }
        }
        
        return ans;
    }
};