class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& a, int k) {
        
        int n=a.size();
        int m=a[0].size();
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            int c=0;
            
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
          // cout<<i<<" ";
            v.push_back({c,i});
        }
         
            
            sort(v.begin(),v.end());
            
            vector<int> ans;
            
            int q=0;
            
            while(k--)
            {
                ans.push_back(v[q].second);
                q++;
            }
            
            return ans;
        
    }
};