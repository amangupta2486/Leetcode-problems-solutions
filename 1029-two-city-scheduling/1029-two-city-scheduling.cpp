class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& a) {
        
        int ans=0;
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            ans+=a[i][0];
            v.push_back(a[i][1]-a[i][0]);
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n/2;i++)
        {
            ans+=v[i];
        }

        return ans;
    }
};