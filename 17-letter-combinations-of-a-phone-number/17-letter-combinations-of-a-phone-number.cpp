class Solution {
public:
    
    string key[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    
    vector<string> ans;
    
    void solve(int i,string d,string s)
    {
        if(i==d.size())
        {
            if(i!=0)
            ans.push_back(s);
            
            return;
        }
        
        int id=d[i]-'0';
        string k=key[id];
        
        for(int j=0;j<k.size();j++)
        {
            solve(i+1,d,s+k[j]);
        }
    }
    
    vector<string> letterCombinations(string d) {
        
        solve(0,d,"");
        
        return ans;
    }
};