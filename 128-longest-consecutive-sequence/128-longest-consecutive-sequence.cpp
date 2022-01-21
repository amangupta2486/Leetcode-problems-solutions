class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        if(n<=1)
        {
            return n;
        }
        
        sort(a.begin(),a.end());
        
        int j=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]!=a[j])
           {
               j++;
               a[j]=a[i];
           }
        }
        
        int ans=1;
        
        int c=1;
        
        for(int i=0;i<j;i++)
        {
            if(a[i]+1==a[i+1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            
            ans=max(ans,c);
        }
        
        return ans;
    }
};