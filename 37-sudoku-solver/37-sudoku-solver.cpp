class Solution {
public:
    
    bool check(int i,int j,char ch,vector<vector<char>>& b)
    {
        for(int k=0;k<9;k++)
        {
            if(b[k][j]==ch )
            {
                return false;
            }
            if(b[i][k]==ch )
            {
                return false;
            }
            
            int x=k/3;
            int y=k%3;
            
            if(b[((i/3)*3)+x][((j/3)*3)+y]==ch)
            {
                return false;
            }
        }
        
        return true;
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
                       
                        //b[i][j]=k;
                        if(check(i,j,k,b))
                        {
                           b[i][j]=k;
                            
                           if(solve(b))
                           {
                               return true;
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