class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        
        int n=a.size();
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({abs(a[i]-x),a[i]});
        }
        
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            
            if(a[0]==b[0])
            {
                return a[1]<b[1];
            }
            
            return a[0]<b[0];
        });
        
        vector<int> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i][1]);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};