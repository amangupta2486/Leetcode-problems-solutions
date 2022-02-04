class Solution {
public:
    int findMaxLength(vector<int>& a) {
        
        int n=a.size();
        
        int b=0,c=0;
        
        map<int,int> m;
        
        int s=0,ans=0;
    
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                s++;
            
            if(a[i]==0)
                s--;
            
            if(s==0)
                ans=i+1;
            
            else
            {
                if(m.find(s)!=m.end())
                {
                    ans=max(ans,i-m[s]);
                }
                else
                {
                    m[s]=i;
                }
            }
        }
        
        return ans;
//         vector<int> p(n,0),s(n,0);
        
//         if(a[0]==1)
//         p[0]=1;
        
        
//         for(int i=1;i<n;i++)
//         {
//             if(a[i]==1)
//                 p[i]=1+p[i-1];
//             else
//                 p[i]=p[i-1];
//         }
        
//          if(a[0]==0)
//          s[0]=1;
        
        
//         for(int i=1;i<n;i++)
//         {
//             if(a[i]==0)
//                 s[i]=1+s[i-1];
//             else
//                 s[i]=s[i-1];
//         }
        
//         int i=0,j=0,ans=0;
        
//         while(i<n && j<n)
//         {
//             if(s[i]-p[j]==0)
//             {
//                 ans=max(ans,j-i+1);
//                 i++;
//                 j++;
//             }
            
//             else if(s[i]-p[j]>0)
//             {
//                 j++;
//             }
            
//             else
//             {
//                 i++;
//             }
//         }
        
        return ans;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]==0)
//             {
//                 b++;
//             }
//             else
//             {
//                 c++;
//             }
//         }
        
//         return 2*min(c,b);
    }
};