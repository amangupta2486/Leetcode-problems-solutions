class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int> v,vector<int> &a,int i, int n)
    {
        if(i==n)
        {
            auto it=find(ans.begin(),ans.end(),v);
            
            if(it==ans.end())
            ans.push_back(v);
            return;
        }
        
        v.push_back(a[i]);
        solve(v,a,i+1,n);
        v.pop_back();
        
        solve(v,a,i+1,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        
        vector<int> v;
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        solve(v,a,0,n);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};