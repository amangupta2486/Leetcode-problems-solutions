class Solution {
public:
    int minNumberOperations(vector<int>& a) {
        
        int n=a.size();
        
        int ans=a[0];
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                ans+=a[i+1]-a[i];
            }
        }
        
        return ans;
    }
};
