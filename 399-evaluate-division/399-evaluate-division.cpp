class Solution {
public:
    
    unordered_map<string,int> vis;
    unordered_map<string,vector<pair<string,double>>> mp;
    //vector<string,map<string,double>> mp;
    
    double ans;
    
    void dfs(string i,double val,string d)
    {
        if(i==d)
        {
            ans=val;
            return;
        }
        vis[i]++;

        for(auto j:mp[i])
        {
            string v=j.first;
            double w=j.second;
            
            if(!vis[v])
            {
                dfs(v,val*w,d);
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v,             vector<vector<string>>& q) {
        
        vector<double> b;
        int n=e.size();
        
        for(int i=0;i<n;i++)
        {
            double x=1/v[i];
            
            mp[e[i][0]].push_back({e[i][1],v[i]});
            mp[e[i][1]].push_back({e[i][0],x});
        }
        
        for(auto x:q)
        {
            vis.clear();
            ans=-1;
            
            
            if(mp.find(x[0])==mp.end())
            {
                b.push_back(ans);
                continue;
            }
            
            dfs(x[0],1,x[1]);
            
            b.push_back(ans);
        }
        
        return b;
    }
};