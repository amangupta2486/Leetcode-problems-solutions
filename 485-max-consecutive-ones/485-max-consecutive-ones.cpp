class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        
        int n=a.size();
        
        int c=0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=0;
            }
            
        }

        ans=max(ans,c);
        
        return ans;
    }
};