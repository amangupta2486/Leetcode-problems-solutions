class Solution {
public:
    int n;
    
    int ans=0;
    
    bool check(string &s)
    {
        int n=s.size();
        
        set<char> uq;
        
        for(auto x:s)
        {
            uq.insert(x);
        }
        
        return n==uq.size() ? 1 :0;
    }
    
    void solve(int i,vector<string>& a,set<char> s)
    {
        if(i==n)
        {
            int m=s.size();
            ans=max(ans,m);
            
            return;
        }
        
        int f=1;
        
        for(auto x:a[i])
        {
            if(s.find(x)!=s.end())
            {
                f=0;
                break;
            }
        }
        
        solve(i+1,a,s);
        
        if(f==1 && check(a[i]))
        {
            for(auto x:a[i])
            {
                s.insert(x);
            }
            solve(i+1,a,s);
        }
    }
    
    int maxLength(vector<string>& a) {
        
        n=a.size();
        set<char> s;
        
        solve(0,a,s);
        
        return ans;
    }
};