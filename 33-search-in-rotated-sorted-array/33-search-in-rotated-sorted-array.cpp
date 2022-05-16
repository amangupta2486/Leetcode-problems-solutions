class Solution {
public:
    
    int findKRotation(vector<int>& a, int n) {
	    
	    int i=0,j=n-1;
	    
	    while(i<=j)
	    {
	        int m=(i+j)/2;
	        
	        if(a[m]<=a[(m+1)%n] && a[m]<=a[(m+n-1)%n])
	        {
	            return m;
	        }
	        
	        if(a[m]>=a[0])
	        {
	            i=m+1;
	        }
	        else
	        {
	            j=m-1;
	        }
	    }
	    
	    return 0;
	}
    
    int solve(vector<int>& a,int i,int j,int t)
    {
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]==t)
            {
                return m;
            }
            
            if(a[m]>t)
            {
                j=m-1;
            }
            else
            {
                i=m+1;
            }
        }
        
        return -1;
    }
    int search(vector<int>& a, int t) {
        
        int n=a.size();
        
        int mi=findKRotation(a,n);
        
        if(a[mi]==t)
        {
            return mi;
        }
        
        int x=solve(a,mi,n-1,t);
        int y=solve(a,0,mi-1,t);
        
        if(x==-1 && y==-1)
        {
            return -1;
        }
        
        return abs(x*y);

       
    }
};