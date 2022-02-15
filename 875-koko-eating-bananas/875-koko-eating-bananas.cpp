class Solution {
public:
    int minEatingSpeed(vector<int>& p, int k) {
        
        int n=p.size();
        
        int l=1,h=*max_element(p.begin(),p.end());
        
        //int ans=h;
        
        while(l<h)
        {
            int m=(l+h)/2;
            
            int x=0;
            
            for(int i=0;i<n;i++)
            {
                x+=(p[i]/m);
               
                if(p[i]%m)
                {
                    x++;
                }
            }
            
            if(x<=k)
            {
                //ans=min(ans,m);
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