class Solution {
public:
    
    
    bool check(vector<vector<char>> &g)
    {
        for(int i=0;i<3;i++)
        {
            if(g[i][0]==g[i][1] && g[i][2]==g[i][1] && g[i][0]!='.')
            {
                return 1;
            }
        }
        
        for(int i=0;i<3;i++)
        {
            if(g[0][i]==g[1][i] && g[2][i]==g[1][i] && g[0][i]!='.')
            {
                return 1;
            }
        }
        
        if(g[0][0]!='.' && g[0][0]==g[1][1] && g[1][1]==g[2][2])
        {
            return 1;
        }
        
        if(g[0][2]!='.' &&  g[0][2]==g[1][1] && g[1][1]==g[2][0])
        {
            return 1;
        }
        
        return 0;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        
        vector<vector<char>> g(3,vector<char>(3,'.'));
        
        int f=0;
        
        for(auto x:moves)
        {
            if(f==0)
            {
                g[x[0]][x[1]]='X';
            }
            else
            {
                g[x[0]][x[1]]='O';
            }
            
            if(f==0 && check(g))
            {
                return "A";
            }
            
            else if(f==1 && check(g))
            {
                return "B";
            }
            
            f^=1;
        }
        
        if(moves.size()<9)
        {
            return "Pending";
        }
        
        return "Draw";
    }
};