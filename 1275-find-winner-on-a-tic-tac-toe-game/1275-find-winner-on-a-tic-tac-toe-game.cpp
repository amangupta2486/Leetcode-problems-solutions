class Solution {
public:
    
    char ans;
    
    bool check(vector<vector<char>> &g,char c)
    {
        int n=3;
        
        for(int i=0;i<3;i++)
        {
            int cnt=0;
            for(int j=0;j<3;j++)
            {
                if(g[i][j]==c)
                {
                    cnt++;
                }
            }
            
            if(cnt==3)
            {
                return 1;
            }
        }
        
        
        for(int j=0;j<3;j++)
        {
            int cnt=0;
            for(int i=0;i<3;i++)
            {
                if(g[i][j]==c)
                {
                    cnt++;
                }
            }
            
            if(cnt==3)
            {
                return 1;
            }
        }
        
        int cnt=0;
        
        for(int i=0,j=0;i<3&& j<3;i++,j++)
        {
            if(g[i][j]==c)
            {
                cnt++;
            }
        }
        if(cnt==3)
        {
            return 1;
        }
        
        cnt=0;
        
        for(int i=2,j=0;i>=0&& j<3;i--,j++)
        {
            if(g[i][j]==c)
            {
                cnt++;
            }
        }
        if(cnt==3)
        {
            return 1;
        }
        
        return 0;
    }
    string tictactoe(vector<vector<int>>& moves) {
        
        vector<vector<char>> g(3,vector<char>(3,'.'));
        
        int n=moves.size();
        
        int f=1;
        
        for(int i=0;i<n;i++)
        {
            auto v=moves[i];
            if(f)
            {
                g[v[0]][v[1]]='X';
                if(check(g,'X'))
                {
                    return "A";
                }
            }
            else
            {
                g[v[0]][v[1]]='O';
                if(check(g,'O'))
                {
                    return "B";
                }
            }
            f^=1;
        }
        
        if(n<9)
        {
            return "Pending";
        }
        
        return "Draw";
    }
};