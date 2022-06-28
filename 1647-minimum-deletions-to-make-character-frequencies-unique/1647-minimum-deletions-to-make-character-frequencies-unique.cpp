class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        
        vector<int> v(26,0);
        
        int mx=0;
        for(auto i:s)
        {
            v[i-'a']++;
            mx=max(mx,i-'a');
        }
        
        for(int i=0;i<26;i++)
        {
            mx=max(mx,v[i]);
        }
        
        vector<int> vis(mx+1,0);
        
        
        vector<vector<int>> b;
        
        for(int i=0;i<26;i++)
        {
            b.push_back({v[i],i});
        }
        
        sort(b.rbegin(),b.rend());
        
        int ans=0;
        
        for(int i=0;i<26;i++)
        {
            auto p=b[i];
            int x=p[0];
            int ch=p[1];
            //cout<<x<<" "<<ch<<endl;
            for(int j=x;j>0;j--)
            {
                if(vis[j])
                {
                    ans++;
                }
                else
                {
                    vis[j]=1;
                    break;
                }
            }
        }
        
        return ans;
    }
};