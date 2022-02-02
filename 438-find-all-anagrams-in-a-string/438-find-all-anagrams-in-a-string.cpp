class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.size();
        int m=p.size();
        
        vector<int> v(26,0),q(26,0),ans;
        
        if(n<m)
        {
            return ans;
        }
        
        for(int i=0;i<m;i++)
        {
            v[p[i]-'a']++;
            q[s[i]-'a']++;
        }
        
        int j=0;
        
        for(int i=m;i<n;i++)
        {
            if(v==q)
            {
                ans.push_back(j);
            }
            
            q[s[i]-'a']++;
            
            q[s[j]-'a']--;
            
            
            j++;
        }
        
        if(v==q)
        {
            ans.push_back(j);
        }
        
        return ans;
    }
};