class Solution {
public:
    
    vector<string> ans;
    
    void solve(string s,int i,int j,int n)
    {
        if(i==0 && j==0)
        {
            ans.push_back(s);
            return;
        }
        
        if(i>j)
        {
            return;
        }
        if(i==0)
        {
            solve(s+')',i,j-1,n);
            return;
        }

        solve(s+'(',i-1,j,n);
        solve(s+')',i,j-1,n);
    }
    
    
    vector<string> generateParenthesis(int n) {
        
        solve("",n,n,n);
        
        return ans;
    }
};