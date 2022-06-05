class Solution {
public:
    
    bool check(int i,int j,vector<vector<char>>& b,char x)
    {
        for(int k=0;k<9;k++)
        {
            if(b[i][k]==x)
            {
                return 0;
            }
            if(b[k][j]==x)
            {
                return 0;
            }
            
            int p=(3*(i/3))+(k/3);
            int q=(3*(j/3))+(k%3);
           // cout<<p<<","<<q<<" ";
            if(b[p][q]==x)
            {
                return 0;
            }
        }
        
        return 1;
    }
    bool solve(vector<vector<char>>& b)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(b[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        if(check(i,j,b,k))
                        {
                            b[i][j]=k;
                            
                            if(solve(b))
                            {
                                return 1;
                            }
                            
                            else
                            {
                                b[i][j]='.';
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