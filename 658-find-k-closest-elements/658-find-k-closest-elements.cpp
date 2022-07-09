class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        
        vector<vector<int>> b;
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            b.push_back({abs(a[i]-x),a[i]});
        }
        
        sort(b.begin(),b.end(),[&](auto &a,auto &b){
            return a[0]<b[0] || (a[0]==b[0] && a[1]<b[1]);
        });
        
        vector<int> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(b[i][1]);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};