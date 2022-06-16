class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        
        int n=a.size();
        
        int t=pow(2,n);
        
        vector<vector<int>> ans;
        
        for(int i=0;i<t;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                int x=1<<j;
                
                if(x&i)
                {
                    v.push_back(a[j]);
                }
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};