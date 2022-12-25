class Solution {
public:
    int takeCharacters(string s, int k) {
        
        int n=s.size();
        
        int a=0,b=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                a++;
            }
            else if(s[i]=='b')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        
        if(a<k || b<k || c<k)
        {
            return -1;
        }
        
        int i=n-1,j=n-1;
        int ans=n;
        
        while(i>=0)
        {
            if(s[i]=='a')
                a--;
            if(s[i]=='b')
                b--;
            if(s[i]=='c')
                c--;
            
            while(a<k || b<k || c<k)
            {
                if(s[j]=='a')
                    a++;
                if(s[j]=='b')
                    b++;
                if(s[j]=='c')
                    c++;
                
                j--;
            }
            
            ans=min(ans,i+n-j-1);
            i--;
        }
        
        return ans;
    }
};