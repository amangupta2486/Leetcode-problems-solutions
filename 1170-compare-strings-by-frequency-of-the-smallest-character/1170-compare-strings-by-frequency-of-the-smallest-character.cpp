class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
        
        int n=q.size();
        int m=w.size();
        
        vector<vector<int>> v(m,vector<int>(26,0));
        vector<vector<int>> v2(n,vector<int>(26,0));
        
        for(int i=0;i<m;i++)
        {
            string s=w[i];
            
            for(auto j:s)
            {
                v[i][j-'a']++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            string s=q[i];
            
            for(auto j:s)
            {
                v2[i][j-'a']++;
            }
        }
        
        vector<int> v3(m,0);
        
        for(int i=0;i<m;i++)
        {
            int c1=0;
            
            for(int k=0;k<26;k++)
            {
                if(v[i][k]!=0)
                {
                    c1=v[i][k];
                    break;
                }
            }
            
            v3[i]=c1;
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            int c1=0;
            
            for(int k=0;k<26;k++)
            {
                if(v2[i][k]!=0)
                {
                    c1=v2[i][k];
                    break;
                }
            }
            
            int cnt=0;
            
            for(int j=0;j<m;j++)
            if(c1<v3[j])
                cnt++;
            
            ans.push_back(cnt);
            
        }
        
        return ans;
    }
};