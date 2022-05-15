class Solution {
public:
    vector<vector<string>> ans;
    
    
    bool check(vector<string> &v,int x,int y,int n)
    {
        for(int j=y;j>=0;j--)
        {
            if(v[x][j]=='Q')
            {
                return 0;
            }
        }
        
        for(int i=x,j=y;i>=0 && j>=0;i--,j--)
        {
            if(v[i][j]=='Q')
            {
                return 0;
            }
        }
        for(int i=x,j=y;i<n && j>=0;i++,j--)
        {
            if(v[i][j]=='Q')
            {
                return 0;
            }
        }
        return 1;
    }
    
    void solve(vector<string> v,int j,int n)
    {
        if(j==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(check(v,i,j,n))
            {
                v[i][j]='Q';
                solve(v,j+1,n);
                v[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> v;
        
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            v.push_back(s);
        }
        
        solve(v,0,n);
        
        return ans;
    }
};