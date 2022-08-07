class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        
        int n=a.size();
        
        int ans=0,cnt=0,j=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                cnt++;
            }
        
            while(cnt>k && j<n)
            {
                if(a[j]==0)
                {
                    cnt--;
                }
                j++;
            }
            
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};