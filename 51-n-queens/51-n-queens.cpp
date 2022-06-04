class Solution {
public:
    
    vector<vector<string>> ans;
    
    bool check(vector<string> &v,int x,int y)
    {
        for(int i=y;i>=0;i--)
        {
            if(v[x][i]=='Q')
            {
                return false;
            }
        }
        
        for(int i=x,j=y;i>=0 && j>=0 ;i--,j--)
        {
            if(v[i][j]=='Q')
            {
                return false;
            }
        }
        
        for(int i=x,j=y;i<v.size() && j>=0;i++,j--)
        {
            if(v[i][j]=='Q')
            {
                return false;
            }
        }
        
        return true;
    }
    void solve(int c,vector<string> &v,int n)
    {
        if(c==n)
        {
           ans.push_back(v);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(check(v,i,c))
            {
                v[i][c]='Q';
                solve(c+1,v,n);
                v[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> v(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            v[i]=s;
        }
        
        solve(0,v,n);
        
        return ans;
    }
};