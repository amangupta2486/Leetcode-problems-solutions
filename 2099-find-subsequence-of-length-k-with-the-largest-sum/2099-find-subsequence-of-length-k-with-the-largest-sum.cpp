class Solution {
public:
    vector<int> maxSubsequence(vector<int>& a, int k) {
        
        int n=a.size();
        
        priority_queue<int> q;
        
        vector<vector<int>> v,p;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],i});
        }
     
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            return a[0]>b[0];
        });
        
        for(int i=0;i<k;i++)
        {
            p.push_back(v[i]);
        }
        
        sort(p.begin(),p.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        vector<int> ans;
        
        for(auto i:p)
        {
            ans.push_back(i[0]);
        }
        
        return ans;
    }
};