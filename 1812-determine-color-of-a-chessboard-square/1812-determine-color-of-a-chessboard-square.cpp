class Solution {
public:
    bool squareIsWhite(string s) {
        
        int x=s[0]-'a';
        int y=s[1]-'0';
        
        if(x%2==0)
        {
            if(y&1)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            if(y&1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        
        return 0;
    }
};