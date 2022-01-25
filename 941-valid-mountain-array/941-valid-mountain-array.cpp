class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        
        int n=a.size();
        
        if(n<=2)
        {
            return 0;
        }
        
//         int p[n],s[n];
        
//         p[0]=a[0];
        
//         for(int i=1;i<n;i++)
//         {
//             p[i]=max(p[i-1],a[i]);
//         }
        
//         s[n-1]=a[n-1];
        
//         for(int i=n-2;i>=0;i--)
//         {
//             s[i]=max(s[i+1],a[i]);
//         }
        
//         for(int i=1;i<n-1;i++)
//         {
//             if(a[i]>p[i-1] && a[i]>s[i+1])
//             {
//                 return 1;
//             }
//         }
        
        
        int i=0;
            
            if(i+1<n && a[i+1]>a[i])
            {    
                while(i+1<n && a[i+1]>a[i] )
                {
                    i++;
                }
                
                if(i==n-1)
                {
                    return 0;
                }

                if(i+1<n && a[i+1]<a[i] )
                 {   
                     while(i+1<n && a[i+1]<a[i])
                    {
                        i++;
                    }
                 }
            
            }
            else
            {             
                    return 0;
            }
        
        
        cout<<i<<endl;
        
        if(i==n-1)
        {
            return 1;
        }
    
        return 0;
    }
};