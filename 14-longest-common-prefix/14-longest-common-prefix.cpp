class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        int mi=INT_MAX;
        
        for(auto i:s)
        {
            int m=i.size();
            mi=min(mi,m);
        }
        
        string ans="";
        
        int f=1;
        
        for(int i=0;i<mi;i++)
        {
            for(int j=1;j<s.size();j++)
            {
                if(s[0][i]!=s[j][i])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            {
                break;
            }
            
            ans+=s[0][i];
        }
        
        return ans;
    }
};