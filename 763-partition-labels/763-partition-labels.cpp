class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int n=s.size();
        
//         map<char,int> mp;
//         vector<vector<int>> p;
        
//         for(int i=0;i<n;i++)
//         {
//             if(mp.find(s[i])==mp.end())
//             {    
//                 mp[s[i]]==i;
//             }
//             else
//             {
                
//             }
//         }
        
        map<char,vector<int>> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]].push_back(i);
        }
        
        vector<vector<int>> p;
        
        for(auto i:mp)
        {
            
            auto x=i.second;
            int m=x.size();
            //cout<<i.first<<" "<<x[0]<<" "<<x[m-1]<<endl;
            p.push_back({x[0],x[m-1]});
        }
        
        sort(p.begin(),p.end());
        
        vector<vector<int>> ans;
        
        for(auto i:p)
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
        
        vector<int> v;
        
        for(auto i:ans)
        {
            //cout<<i[0]<<" "<<i[1]<<endl;
            v.push_back(i[1]-i[0]+1);
        }
        
        return v;
    }
};