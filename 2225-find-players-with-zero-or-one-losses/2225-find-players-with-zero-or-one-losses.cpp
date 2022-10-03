class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& a) {
        
        map<int,int> w,l;
        
        
        for(auto x:a)
        {
            w[x[0]]++;
            l[x[1]]++;
        }
        
        vector<vector<int>> ans;
        
        vector<int> p,q;
        
        for(auto i:w)
        {
            int x=i.first;
            int c=i.second;
            
            if(l[x]==0)
            {
              p.push_back(x);   
            }
        }
        
        for(auto i:l)
        {
            int x=i.first;
            int c=i.second;
            
            if(c==1)
            {
              q.push_back(x);   
            }
        }
        
        ans.push_back(p);
        ans.push_back(q);
        
        return ans;
    }
};