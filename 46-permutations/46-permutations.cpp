class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int> a,int i,int n)
    {
        if(i==n)
        {
            ans.push_back(a);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            //cout<<j<<" ";
            swap(a[i],a[j]);
            solve(a,i+1,n);
            swap(a[i],a[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& a) {
        
        int n=a.size();

        solve(a,0,n);
        
        return ans;
        
    }
};