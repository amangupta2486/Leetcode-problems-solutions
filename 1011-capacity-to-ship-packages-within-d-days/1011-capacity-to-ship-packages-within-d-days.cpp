class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
        
        long n=w.size();
        
        long l=*max_element(w.begin(),w.end()),h=0;
        
        for(int i=0;i<n;i++)
        {
            h+=w[i];
        }
        
        while(l<h)
        {
            long m = (l+h)/2;
            
            long x=0,k=0;
            
            for(int i=0;i<n;i++)
            {
                if(x+w[i]<=m)
                {
                    x+=w[i];
                    
                }
                
                else
                {
                    x=w[i];
                    k++;
                }
            }            
            if(x<=m)
            {
                k++;
            }
            
            if(k<=d)
            {
                h=m;
            }
            
            else
            {
                l=m+1;
            }
        }
        
        return h;
    }
};