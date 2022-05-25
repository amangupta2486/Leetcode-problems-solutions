class Solution {
public:

    bool check(vector<vector<char>>& b,int x,int y,char k)
    {
        for(int i=0;i<9;i++)
        {
            if(b[x][i]==k)
            {
                return 0;
            }
            if(b[i][y]==k)
            {
                return 0;
            }
            
            if(b[3*(x/3)+(i/3)][3*(y/3)+(i%3)]==k)
            {
                return 0;
            }
        }
        
        return 1;
    }
    
    bool solve(vector<vector<char>>& g)
    {

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(g[i][j]=='.')
                {
                    for(int k='1';k<='9';k++)
                    {                       
                        if(check(g,i,j,k))
                        {
                            g[i][j]=k;
                            if(solve(g))
                            {
                                return true;
                            }
                             else
                            {
                                g[i][j]='.';
                            }
                        }                       
                    }
                    return false;
                }
            }
        }
        
        return true;
    }
    void solveSudoku(vector<vector<char>>& b) {

        solve(b);
    }
};