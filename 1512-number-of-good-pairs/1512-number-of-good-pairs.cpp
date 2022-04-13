class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        
        int n=a.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]==a[j])
                {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};