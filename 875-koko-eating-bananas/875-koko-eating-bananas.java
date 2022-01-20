class Solution {
    public int minEatingSpeed(int[] p, int h) {
        
        int n=p.length;
        Arrays.sort(p);
        
        int l=1;//r=*max_element(p.begin(),p.end());
        int r=p[n-1];
        while(l<r)
        {
            int m=(l+r)/2;

            int x=0;
            
            for(int i:p)
            {
                x+= (i/m);
                
                if(i%m!=0)
                    x=x+1;
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
}