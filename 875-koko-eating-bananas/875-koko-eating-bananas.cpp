class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
        int n=p.size();

        int l=1,r=*max_element(p.begin(),p.end());
        
        while(l<r)
        {
            int m=(l+r)/2;

            int x=0;
            
            for(auto i:p)
            {
                x+= (i/m)+(i%m!=0);
            }
            if(x<=h)
            {
                r=m;
            }
            
            else
            {
                l=m+1;
            }
       
        }
        
        return r;

    }
};