class Solution {
public:
    
    int solve(vector<int> &a)
    {
        int n=a.size();
        
        int i=0,j=n-1;
        
        if(a[0]<=a[n-1])
        {
            return 0;
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(n+m-1)%n] && a[m]<=a[(m+1)%n])
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
    
    int binarysearch(vector<int>& a, int t,int x,int y)
    {
        int n=a.size();
        int i=x,j=y-1;
      //  cout<<i<<" "<<j<<endl;
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
        int m=solve(a);
       // cout<<m<<endl;
        if(a[m]==t)
        {
            return m;
        }
        int f1=binarysearch(a,t,0,m);
        int f2=binarysearch(a,t,m,n);
        
        if(f1!=-1)
        {
            return f1;
        }
        if(f2!=-1)
        {
            return f2;
        }
        
        return -1;
    }
};