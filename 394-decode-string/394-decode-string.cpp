class Solution {
public:
    
    string solve(int &i,string &s)
    {
        int n=s.size();
        string ans="";
        string p="";
        int cnt=0;
        
        for(;i<n;i++)
        {
            if(s[i]=='[')
            {
                i++;
                string f=solve(i,s);
                
                while(cnt>0)
                {
                    ans+=f;
                    cnt--;
                }
            }
           
            else if(s[i]>='0' && s[i]<='9')
            {
                cnt=(cnt*10)+s[i]-'0';
            }

            else if(s[i]==']')
            {
                return ans;
            }

            else
            {
                ans+=s[i];
            }
        }
        
        return ans;
    }
    string decodeString(string s) {
        
        string p="";
        int i=0;
        
        return solve(i,s);
    }
};