class Solution {
public:
    
    map<string,int> mp;
    
    void solve(string s,int i,int k)
    {
        if(i==k)
        {
            mp[s]=1;
            return;
        }
        
        solve(s+'0',i+1,k);
        solve(s+'1',i+1,k);
    }
    
    bool hasAllCodes(string s, int k) {
        
        int n=s.size();
        
        if(n<k)
        {
            return 0;
        }
        
       // solve("",0,k);
        set<string> ans;
        
        for(int i=0;i<n-k+1;i++)
        {
            string b=s.substr(i,k);
            
            ans.insert(b);
        }
        
        if(ans.size()==pow(2,k))
        {
            return 1;
        }
        
        return 0;
    }
};