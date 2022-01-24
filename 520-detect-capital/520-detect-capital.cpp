class Solution {
public:
    bool detectCapitalUse(string w) {
        
        int n=w.size();
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(w[i]>=65 && w[i]<=90)
            {
                c++;
            }
        }
        
        if(c==n || c==0)
        {
            return 1;
        }
        
         
        if(c==1 && (w[0]>=65 && w[0]<=90))
        {
            return 1;
        }
        
        return 0;
    }
};