class Solution {
public:
    string addBinary(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        
        string ans ="";
        char c='0';
        
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0)
        {
            if(a[i]=='1' && b[j]=='1')
            {
                if(c=='1')
                {
                    ans+='1';
                    c='1';
                }
                else
                {
                    ans+='0';
                    c='1';
                }
            }
            
            else if(a[i]=='1' || b[j]=='1')
            {
                if(c=='1')
                {
                    ans+='0';
                    c='1';
                }
                else
                {
                    ans+='1';
                    c='0';
                }
            }
            
            else if(a[i]=='0' && b[j]=='0')
            {
                if(c=='1')
                {
                    ans+='1';
                    c='0';
                }
                else
                {
                    ans+='0';
                   // c='0';
                }
            }
            i--;
            j--;
            
        }
        
        while(i>=0)
        {
            // ans+=a[i];
            // i--;
            if(a[i]=='1')
            {    
            if(c=='1' )
            {
                ans+='0';
                c='1';
            }
            else
            {
                ans+='1';
                c='0';
            }}
            
            else
            {
                ans+=c;
                c='0';
            }
            i--;
        }
        
        while(j>=0)
        {
           if(b[j]=='1')
            {    
            if(c=='1' )
            {
                ans+='0';
                c='1';
            }
            else
            {
                ans+='1';
                c='0';
            }}
            
            else
            {
                ans+=c;
                c='0';
            }
            j--;
        }
        
        if(c=='1')
            ans+='1';
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};