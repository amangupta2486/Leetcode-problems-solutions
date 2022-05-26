class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.size();
        
        string p="";
        
        for(int i=0;i<n/2;i++)
        {
            p+=s[i];
            
            int d=n/(i+1);
            string t="";
            //cout<<t<<endl;
            while(d--)
            {
                t+=p;
            }
            
            if(t==s)
            {
                return 1;
            }
        }
        
        return 0;
    }
};