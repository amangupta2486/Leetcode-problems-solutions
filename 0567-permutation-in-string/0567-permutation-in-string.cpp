class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        
        vector<int> v(26,0);
        
        for(auto x:s1)
        {
            v[x-'a']++;
        }
        
        vector<vector<int>> p(m+1,vector<int>(26,0));
        
        for(int i=1;i<=m;i++)
        {
            for(int j=0;j<26;j++)
            {
                p[i][j]+=p[i-1][j];
            }
            
            p[i][s2[i-1]-'a']++;
        }
        
        for(int i=n;i<=m;i++)
        {
            vector<int> q(26,0);
            
            for(int j=0;j<26;j++)
            {
                q[j]=p[i][j]-p[i-n][j];
            }
            
            if(q==v)
            {
                return 1;
            }
        }
        
        return 0;
    }
};