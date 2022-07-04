class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        
        int n=p.size();
        
        sort(p.begin(),p.end(),[&](auto &a,auto &b){
            return a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]);
        });
        
        vector<vector<int>> ans;
        
        for(auto x:p)
        {
            int idx=x[1];
            
            ans.insert(ans.begin()+idx,x);
        }
        
        return ans;
    }
};