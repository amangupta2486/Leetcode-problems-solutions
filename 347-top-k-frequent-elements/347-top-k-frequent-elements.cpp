class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<vector<int>> v;
        
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.rbegin(),v.rend());
        
        // sort(v.begin(),v.end(),[&](auto &a,auto &b){
        //    return a[0]>b[0] ; 
        // });
        
        vector<int> ans;
        
        for(auto x:v)
        {
            if(k>0)
            ans.push_back(x[1]);
            
            else
            {
                break;
            }
            k--;
        }
        
        return ans;
    }
};