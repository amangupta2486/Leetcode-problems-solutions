class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        
        int ml=INT_MAX;
        string x;
        for(auto i:a)
        {
            if(ml>i.size())
            {
                ml=i.size();
                x=i;
            }
        }
        
        string ans="";
        int n=a.size();
        int f=1;
        
        for(int i=0;i<ml;i++)
        {
            for(int j=0;j<n;j++)
            {
                string s=a[j];
                
                if(x[i]!=s[i])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            {
                break;
            }
            ans+=x[i];
        }
        
        return ans;
    }
};