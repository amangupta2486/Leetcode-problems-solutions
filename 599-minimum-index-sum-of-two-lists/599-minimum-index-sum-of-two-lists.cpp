class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        
        map<string,int> mp;
        
        int n=l1.size();
        int m=l2.size();
        
        for(int i=0;i<n;i++)
        {
            mp[l1[i]]=i;
        }
        
        vector<pair<int,string>> v;
        
        for(int j=0;j<m;j++)
        {
            if(mp.find(l2[j])!=mp.end())
            {
                int a=mp[l2[j]]+j;
                v.push_back({a,l2[j]});
            }
        }
        
        sort(v.begin(),v.end());
        
        vector<string> ans;
        
        if(v.size()==0)
        {
            return ans;
        }
        
        ans.push_back(v[0].second);
        for(int i=1;i<v.size();i++)
        {
            if(v[i].first==v[i-1].first)
            ans.push_back(v[i].second);
            
            else
                break;
        }
        
        return ans;
    }
};