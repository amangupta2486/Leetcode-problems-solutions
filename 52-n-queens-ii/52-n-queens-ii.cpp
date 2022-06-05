class Solution {
public:
    
    int ans=0;
    
    bool check(int x,int y,vector<string> &v)
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
        for(int i=x,j=y;i<v.size() && j>=0;i++,j--)
        {
            if(v[i][j]=='Q')
            {
                return 0;
            }
        }
        
        return 1;
    }
    void solve(int j,int n,vector<string> v)
    {
        if(j==n)
        {
            ans++;
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(check(i,j,v))
            {
                v[i][j]='Q';
                solve(j+1,n,v);
                v[i][j]='.';
            }
        }
    }
    int totalNQueens(int n) {
        
        vector<string> v(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            v[i]=s;
        }
        
        solve(0,n,v);
        
        return ans;
    }
};