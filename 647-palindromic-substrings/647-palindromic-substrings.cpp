class Solution {
public:
    
    void solve(int i,int j,int &ans,string &s)
    {
        int n=s.size();
        
        while(i>=0 && j<n && s[i]==s[j])
        {
            ans++;
            i--;
            j++;
        }
    }
    int countSubstrings(string s) {
        
        int n=s.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            solve(i,i,ans,s);
            solve(i,i+1,ans,s);
        }
        
        return ans;
    }
};