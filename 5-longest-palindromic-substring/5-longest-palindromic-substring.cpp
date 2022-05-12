class Solution {
public:
    
    int solve(string s,int i,int j)
    {
        int n=s.size();
        
        while(i>=0 && j<n && s[i]==s[j])
        {
            i--;
            j++;
        }
        
        return j-i-1;
    }
    string longestPalindrome(string s) {
        
        int start=0,end=0,ans=1;
        int n=s.size();
        
        if(n==0)
        {
            return "";
        }
        
        for(int i=0;i<n;i++)
        {   
            int l1=solve(s,i,i);
            int l2=solve(s,i,i+1);

            int l=max(l1,l2);

            if(l>ans)
            {
                ans=l;
                
                start = i-(l-1)/2;
                end   = i+(l)/2;
            }

        }
        cout<<ans<<endl;
        return s.substr(start,end-start+1);
    }
    
};