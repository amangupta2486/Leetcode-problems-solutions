class Solution {
public:
    vector<vector<string>> ans;
    
    bool check(int x,int y,vector<string> &v,int n)
    {
        for(int j=0;j<=y;j++)
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
    
    void solve(int col,int n,vector<string> v)
    {
        if(col==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(check(i,col,v,n))
            {
                v[i][col]='Q';
                solve(col+1,n,v);
                v[i][col]='.';
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
        
        solve(0,n,v);
        
        //cout<<s<<endl;
        
        return ans;
    }
};