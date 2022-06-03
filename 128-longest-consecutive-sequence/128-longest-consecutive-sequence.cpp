class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
       int n=a.size();
       if(n==0)
       {
           return 0;
       }
        sort(a.begin(),a.end());
        int ans=1;
        int c=1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                if(a[i]==a[i-1]+1)
                c++;
                
                else
                {
                    ans=max(ans,c);
                    c=1;
                }  
            }
                      
        }
        
        ans=max(ans,c);
        return ans;
    }
};