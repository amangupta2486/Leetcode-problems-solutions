class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> lis(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j] && lis[i]<lis[j]+1)
                {
                    lis[i]=lis[j]+1;
                }
            }
        }
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mx=max(mx,lis[i]);
        }
        
        return mx;
    }
};