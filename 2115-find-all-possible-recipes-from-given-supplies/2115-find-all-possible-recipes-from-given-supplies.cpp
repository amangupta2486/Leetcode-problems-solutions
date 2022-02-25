class Solution {
public:
    vector<string> findAllRecipes(vector<string>& a, vector<vector<string>>& b, vector<string>& c) {
        
        unordered_set<string> s;
        
        for(auto i:c)
        {
            s.insert(i);
        }
        
        unordered_map<string,vector<string>> m;
        
        unordered_map<string,int> d;
        
        for(auto i:a)
        {
            d[i]=0;
        }
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<(int)b[i].size();j++)
            {
                if(s.find(b[i][j])==s.end())
                {
                    m[b[i][j]].push_back(a[i]);
                    d[a[i]]++;
                }
            }
        }
        
        queue<string> q;
        
        vector<string> ans;
        
        for(int i=0;i<a.size();i++)
        {
           // cout<<a[i]<<" ";
            if(d[a[i]]==0)
            {
                q.push(a[i]);
            }
        }
        
        // for(auto i:d)
        // {
        //     if(i.second==0)
        //     {
        //         q.push(i.first);
        //     }
        // }
        
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            cout<<p<<" ";
            ans.push_back(p);
            
            for(auto x:m[p])
            {
                d[x]--;
                
                if(d[x]==0)
                {
                    q.push(x);
                }
            }
        }
        
        return ans;
    }
};

/*

["xevvq","izcad","p","we","bxgnm","vpio","i","hjvu","igi","anp","tokfq","z","kwdmb","g","qb","q","b","hthy"]
[["wbjr"],["otr","fzr","g"],["fzr","wi","otr","xgp","wbjr","igi","b"],["fzr","xgp","wi","otr","tokfq","izcad","igi","xevvq","i","anp"],["wi","xgp","wbjr"],["wbjr","bxgnm","i","b","hjvu","izcad","igi","z","g"],["xgp","otr","wbjr"],["wbjr","otr"],["wbjr","otr","fzr","wi","xgp","hjvu","tokfq","z","kwdmb"],["xgp","wi","wbjr","bxgnm","izcad","p","xevvq"],["bxgnm"],["wi","fzr","otr","wbjr"],["wbjr","wi","fzr","xgp","otr","g","b","p"],["otr","fzr","xgp","wbjr"],["xgp","wbjr","q","vpio","tokfq","we"],["wbjr","wi","xgp","we"],["wbjr"],["wi"]]
["wi","otr","wbjr","fzr","xgp"]

*/