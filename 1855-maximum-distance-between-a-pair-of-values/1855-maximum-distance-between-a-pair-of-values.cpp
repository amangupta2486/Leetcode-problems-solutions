class Solution {
public:
    
    int solve(vector<int>& b,int i,int x)
    {
        int j=b.size()-1;
        
        int ans=i;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(b[m]>=x)
            {
                ans=m;
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return ans;
    }
    int maxDistance(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            
            // for(int j=i;j<m;j++)
            // {
            //     if(a[i]<=b[j])
            //     {
                    ans=max(ans,solve(b,i,a[i])-i);
            //     }
            // }
        }
        
        return ans;
    }
};