class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        
        map<char,int> mp;
        
        for(auto i:s)
        {
            mp[i]++;
        }
        
        vector<pair<int,char>> v;
        
        int mx=n;
        
        for(auto i:mp)
        {
           // cout<<i.second<<" "<<i.first<<endl;
            v.push_back({i.second,i.first});
            mx=max(mx,i.second);
        }
        
        sort(v.rbegin(),v.rend());
        
        int ans=0;
        unordered_set<int> st;
        
        int f=mx+1;
        for(int i=0;i<v.size();i++)
        {
            int x=v[i].first;
            
            if(x>mx)
            {
                ans+=x-mx;
                x=mx;
            }
            
            mx=max(0,x-1);
            
            st.insert(x);
        }
        
        return ans;
    }
};