class Solution {
public:
    bool detectCapitalUse(string w) {
        
        int f=1;
        int n=w.size();
        
        for(int i=0;i<n;i++)
        {
            if(w[i]>='a' && w[i]<='z')
            {
                f=0;
                break;
            }
        }
        
        if(f==1)
        {
            return 1;
        }
        
        if(!(w[0]>='a' && w[0]<='z'))
        {
            f=1;
        }
        
        
        for(int i=1;i<n;i++)
        {
            if(w[i]>='a' && w[i]<='z')
            {
                f=0;
                break;
            }
        }
        
        if(f==1)
        {
            return 1;
        }
        
        f=1;
        
        for(int i=1;i<n;i++)
        {
            if(w[i]>='A' && w[i]<='Z')
            {
                f=0;
                break;
            }
        }
        
        if(f==1)
        {
            return 1;
        }
        
        return 0;
        
    }
};