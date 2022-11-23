class Solution {
public:
    
    bool check(int i,int j,vector<vector<char>>& b)
    {
        char ch=b[i][j];
        
        for(int k=0;k<9;k++)
        {
            if(b[k][j]==ch && k!=i)
            {
                return 0;
            }
            
            if(b[i][k]==ch && k!=j)
            {
                return 0;
            }
            
            int x=(i/3)*3 +(k/3);
            int y=(j/3)*3 +(k%3);
            
            if(x!=i && y!=j && b[x][y]==ch)
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
                 if(b[i][j]!='.')
                 {
                     if(check(i,j,b))
                     {
                         continue;
                     }
                     else
                     {
                         return false;
                     }  
                 }
             }
         }
        
        return 1;
    }
    
    bool isValidSudoku(vector<vector<char>>& b) {
        
       return solve(b);
    }
};