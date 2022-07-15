class Solution {
public:
    vector<string> ans;
    
    string key[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void solve(int i,int n,string d,string s)
    {
        if(i==n)
        {
            if(s!="")
            ans.push_back(s);
            return;
        }
        
        string k=key[d[i]-'0'];
        int m=k.size();
        
        for(int j=0;j<m;j++)
        {
            solve(i+1,n,d,s+k[j]);
        }
    }
    vector<string> letterCombinations(string d) {
        
        int n=d.size();
        
        solve(0,n,d,"");
        
        return ans;
    }
};