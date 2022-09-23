class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        
        int n=a.size();
        
        int c=0,ans=0,j=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
            
            while(c>k)
            {
                if(a[j]==0)
                {
                    c--;
                }
                j++;
            }
            
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};