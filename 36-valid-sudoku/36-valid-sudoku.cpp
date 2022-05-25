class Solution {
public:
    
    bool check(vector<vector<char>>& b,int x,int y)
    {
        char k=b[x][y];
        
        for(int i=0;i<9;i++)
        {
            if(b[x][i]==k && i!=y)
            {
                return 0;
            }
            if(b[i][y]==k && i!=x)
            {
                return 0;
            }
            
            int n=3*(x/3)+(i/3);
            int m=3*(y/3)+(i%3);
            
            if(n!=x && m!=y && b[n][m]==k)
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
                if(g[i][j]!='.')
                {
                    
                    if(check(g,i,j))
                    {
                        continue;                    
                    }                       
                    
                    else
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& b) {
        
        return solve(b);
    }
};