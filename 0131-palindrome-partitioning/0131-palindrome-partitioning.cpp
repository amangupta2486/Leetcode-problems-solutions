class Solution {
public:
     vector<vector<string>> ans;
    
    bool check(string &s)
    {
        int n=s.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return 0;
            }
            i++;
            j--;
        }
        
        return 1;
    }
    
    void solve(int i,int n,string s,vector<string> &v)
    {
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            string b=s.substr(i,j-i+1);
            
            if(check(b))
            {
                v.push_back(b);
                solve(j+1,n,s,v);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        int n=s.size();
        vector<string> v;
        
        solve(0,n,s,v);
        
        return ans;
    }
};