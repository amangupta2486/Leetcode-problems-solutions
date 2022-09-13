class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        
        vector<int> v(26,0);
        
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        
        vector<vector<int>> p;
        
        for(int i=0;i<26;i++)
        {
            p.push_back({v[i],i});
        }
        
        sort(p.rbegin(),p.rend());
        
        int mx=p[0][0];
        
        vector<int> vis(mx+1,0);
        
        int ans=0;
        
        for(int i=0;i<26;i++)
        {
            int c=p[i][0];
            
            while(c>0 && vis[c]==1)
            {
                ans++;
                c--;
            }
            
            vis[c]=1;
        }
        
        return ans;
    }
};