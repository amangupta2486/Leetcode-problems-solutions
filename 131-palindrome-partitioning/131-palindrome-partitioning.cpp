class Solution {
public:
    vector<vector<string>> ans;
    
    bool check(string s)
    {
        int n=s.size();
        int i=0,j=n-1;
        
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
    void solve(vector<string> v,string s,int i)
    {
        if(i==s.size())
        {
            ans.push_back(v);
            return;
        }
        
        for(int j=i;j<s.size();j++)
        {
            string b=s.substr(i,j-i+1);
            
            if(check(b))
            {
                v.push_back(b);
                solve(v,s,j+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector<string> v;
        
        solve(v,s,0);
        
        return ans;
    }
};