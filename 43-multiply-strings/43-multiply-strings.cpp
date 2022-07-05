class Solution {
public:
    
    string add(string a,string b)
    {
       
        int n=a.size();
        int m=b.size();
        
        string s="";
        
        int cr=0;
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0)
        {
            int x=a[i]-'0';
            int y=b[j]-'0';
            
            int z=x+y+cr;
            cr=z/10;
            z=z%10;
            
            s+=(char)(z+'0');
            
            i--;
            j--;
        }
        
        while(i>=0)
        {
            int x=a[i]-'0';
            int z=x+cr;
            cr=z/10;
            z=z%10;
            s+=(char)(z+'0');
            i--;
        }
        while(j>=0)
        {
            int x=b[j]-'0';
            int z=x+cr;
            cr=z/10;
            z=z%10;
            s+=(char)(z+'0');
            j--;
        }
        if(cr>0)
        {
            s+=(char)(cr+'0');
        }
        reverse(s.begin(),s.end());
        //cout<<s<<endl;
        
        return s;
    }
    string multiply(string a, string b) {
        
        if(a=="0" || b=="0")
        {
            return "0";
        }
        
        int n=a.size();
        int m=b.size();
        
        int cr=0;
        int c=0;
        
        vector<string> v;
        
        for(int i=m-1;i>=0;i--)
        {
            int x=b[i]-'0';
            string s="";
            for(int j=n-1;j>=0;j--)
            {
                int y=a[j]-'0';
                
                int z=(x*y)+cr;
                cr=z/10;
                z=z%10;
                
                s+=(char)(z+'0');
            }
            if(cr>0)
            {
                s+=(char)(cr+'0');
            }
            reverse(s.begin(),s.end());
            
            int p=c;
            while(p>0)
            {
                s+='0';
                p--;
            }
            v.push_back(s);
            //cout<<s<<endl;
            cr=0;
            c++;
        }
        
        string ans=v[0];
        
        for(int i=1;i<v.size();i++)
        {
            ans=add(ans,v[i]);
        }
        
        return ans;
    }
};
/*
"123456789"
"987654321"
*/