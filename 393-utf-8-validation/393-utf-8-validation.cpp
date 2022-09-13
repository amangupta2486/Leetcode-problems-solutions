class Solution {
public:
    
    bool check(string s)
    {
        if(s[0]=='1' && s[1]=='0')
        {
            return 1;
        }
        
        return 0;
    }
    
    bool validUtf8(vector<int>& d) {
        
        int n=d.size();
        
        vector<string> v;
        
        for(int i=0;i<n;i++)
        {
            string s="";
            
            int x=d[i];
            
            while(x>0)
            {
                if(x%2==0)
                {
                    s+='0';
                }
                else
                {
                    s+='1';
                }
                
                x=x/2;
            }
            
            while(s.size()<8)
            {
                s+='0';
            }
            
            reverse(s.begin(),s.end());
            
            v.push_back(s);
            
            //cout<<s<<endl;
        }
        
        int f=1;
        
        for(int i=0;i<n;i++)
        {
            string s=v[i];
            
            if(s[0]=='0')
            {
                continue;
            }
            
            else if(s[0]=='1' && s[1]=='1' && s[2]=='0')
            {
                if(i+1<n && check(v[i+1]))
                {
                    i++;
                    continue;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            
            else if(s[0]=='1' && s[1]=='1' && s[2]=='1' && s[3]=='0')
            {
                if(i+2<n && check(v[i+1]) && check(v[i+2]))
                {
                    i+=2;
                    continue;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            
            else if(s[0]=='1' && s[1]=='1' && s[2]=='1' && s[3]=='1' && s[4]=='0')
            {
                if(i+3<n && check(v[i+1]) && check(v[i+2]) && check(v[i+3]))
                {
                    i+=3;
                    continue;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            else
            {
                f=0;
                break;
            }
        }
        
        
        return f;
    }
};