class Solution {
public:
    
    vector<vector<string>> ans;
    
    
    bool check(string s)
    {
        int n=s.size();
        int i=0;
        int j=n-1;
        
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return 0;
            }
        }
        
        return 1;
    }
    void solve(string s,int i,vector<string> v)
    {
        if(i==s.size())
        {
            ans.push_back(v);
            return;
        }
        
        for(int j=i;j<s.size();j++)
        {
            string b=s.substr(i,j-i+1);
            //cout<<b<<" ";
            
            if(check(b))
            {
                v.push_back(b);
                solve(s,j+1,v);
                //cout<<endl;
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        
        int n=s.size();
        
        vector<string> v;
        
        solve(s,0,v);
        
        return ans;
    }
};