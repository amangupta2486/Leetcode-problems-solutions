class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> lis(n,1);
        // int lis[n];
        // memset(lis,1,sizeof(lis));
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && lis[j]+1>lis[i])
                {
                    lis[i]=lis[j]+1;
                }
            }
        }
        
        return *max_element(lis.begin(),lis.end());
    }
};