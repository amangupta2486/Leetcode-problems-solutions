class Solution {
public:
    
     int findMin(vector<int>& a) {
        
        int n=a.size();
        int i=0,j=n-1;
        
        if(n==1)
        {
            return 0;
        }
         
        if(n==2)
        {
           if(a[0]<=a[1])
           {
               return 0;
           }
            
           else
               return 1;
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(n+(m-1)%n)%n] && a[m]<=a[(m+1)%n])
            {
                return m;
            }
            
            else if(a[m]>a[0])
            {
                i++;
            }
            
            else if(a[m]<a[n-1])
            {
                j--;
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
        
        
        int m=findMin(a);
        
        if(a[m]==t)
        {
            return m;
        }
        int n=a.size();
        
        int l=solve(a,0,m,t);
        int r=solve(a,m+1,n-1,t);
        
        if(l!=-1)
        {
            return l;
        }
        if(r!=-1)
        {
            return r;
        }
        
        return -1;
    }
};