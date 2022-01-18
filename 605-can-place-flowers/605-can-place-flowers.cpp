class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        
        int i=1;
        
//         if(a[0]==1)
//         {
//             i=0;
//         }
        
//         if(a[1]==1)
//         {
//             i=1;
//         }
        
        int c=0;
        
        int m=a.size();
        
        if(m==1 && a[0]==0 && n==1)
        {
            return 1;
        }
        if(m==2 && a[0]==0 && a[1]==0 && n==1)
        {
            return 1;
        }
        
        if(m>1 && a[0]==0 && a[1]==0 )
        {
            a[0]=1;
            c++;
            i=2;
        }
        
        for(i;i<m-1;i++)
        {
            if(a[i-1]!=1 && a[i]==0 && a[i+1]!=1)
            {
                a[i]=1;
                c++;
            }
        }
        
        if(m>1 && a[m-2]!=1 && a[m-1]==0 )
        {
            a[m-1]=1;
            c++;
        }
        
        return c>=n;
    }
};