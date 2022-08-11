class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
               for(int j=n-1;j>i+1;j--)
               {
                   a[j]=a[j-1];
               }
              
               if(i+1<n) 
               a[i+1]=0;
                
                i++;
            }
            
        }
        
    }
};