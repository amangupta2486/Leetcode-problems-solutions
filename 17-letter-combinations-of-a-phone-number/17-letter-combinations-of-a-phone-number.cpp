class Solution {
public:
    
    string k[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string> ans;
    
    void solve(string d,string s,int i,int n)
    {
        if(i==n)
        {
            if(s!="")
            ans.push_back(s);
            return;
        }
        
        string key=k[d[i]-'0'];
        int m=key.size();
        
        for(int j=0;j<m;j++)
        {
            solve(d,s+key[j],i+1,n);
        }
    }
    
    vector<string> letterCombinations(string d) {
        
        int n=d.size();
        
        solve(d,"",0,n);
        
        return ans;
    }
};