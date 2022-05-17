class Solution {
public:
    bool judgeCircle(string s) {
        
        int n=s.size();
        
        int x=0,y=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                y++;
            }
            if(s[i]=='L')
            {
                y--;
            }
            if(s[i]=='U')
            {
                x--;
            }
            if(s[i]=='D')
            {
                x++;
            }
        }
        
        return x==0 && y==0 ? 1 : 0;
    }
};