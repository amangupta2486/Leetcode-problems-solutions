class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        
        int n=a.size();
        
        int f=0;
        
        for(int i=0;i<n;i++)
        {
            if(b[0]<a[i][0])
            {
                a.insert(a.begin()+i,b);
                f==1;
                break;
            }
        }
        
        if(f==0)
        {
            a.push_back(b);
        }
        vector<vector<int>> ans;
        
        for(auto i:a)
        {
            if(ans.empty() || ans.back()[1]<i[0])
            {
                ans.push_back(i);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],i[1]);
            }
        }
                
        return ans;
    }
};