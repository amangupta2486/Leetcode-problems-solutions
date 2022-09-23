class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        
        int n=s.size();
        
        int c=0,ans=0,j=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='F')
            {
                c++;
            }
            
            while(c>k)
            {
                if(s[j]=='F')
                {
                    c--;
                }
                j++;
            }
            
            ans=max(ans,i-j+1);
        }
        
        j=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                c++;
            }
            
            while(c>k)
            {
                if(s[j]=='T')
                {
                    c--;
                }
                j++;
            }
            
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};