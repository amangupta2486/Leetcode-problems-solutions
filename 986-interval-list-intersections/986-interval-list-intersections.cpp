class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        
        int n=a.size();
        int m=b.size();
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            
            for(int j=0;j<m;j++)
            {
            int x=min(a[i][1],b[j][1]);
            int y=max(a[i][0],b[j][0]);
            
            int x1=min(a[i][1],b[j][1]);
            int y1=max(a[i][0],b[j][0]);
            
            if(y<=x1 && x>=y1)
            {
                ans.push_back({y,x});
            }
            
            
            }
        }
        
        return ans;
    }
};