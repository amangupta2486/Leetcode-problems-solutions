class Solution {
public:
    int findMin(vector<int>& a) {
        int n=a.size();
        
        int i=0,j=n-1;
        
        if(a[i]<=a[j])
        {
            return 0;
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(m+1)%n] && a[m]<=a[((m-1)+n)%n])
            {
                return m;
            }
            
            if(a[m]>=a[0])
            {
                i=m+1;
            }
            
            else if(a[m]<=a[n-1])
            {
                j=m-1;
            }
        }
        
        return 0;
    }
    
    int find(vector<int>& a,int i,int j,int t)
    {
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]==t)
            {
                return m;
            }
            
            if(a[m]<t)
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return -1;
    }
    int search(vector<int>& a, int t) {
        
        int n=a.size();
        
        int m=findMin(a);
        
        if(a[m]==t)
        {
            return m;
        }
        
        int f1=find(a,0,m-1,t);
        int f2=find(a,m,n-1,t);
        
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