class Solution {
public:
    string makeGood(string s) {
        
        
        int f=1;
        
        while(f==1)
        {
            f=0;
            
            int n=s.size();
        
            for(int i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1] && tolower(s[i])==tolower(s[i+1]))
                {
                    s.erase(i,2);
                    f=1;
                    i++;
                }
            }
        }
        
        return s;
    }
};