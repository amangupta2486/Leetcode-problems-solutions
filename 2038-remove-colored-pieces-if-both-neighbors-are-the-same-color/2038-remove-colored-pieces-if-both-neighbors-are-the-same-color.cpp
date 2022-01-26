class Solution {
public:
    bool winnerOfGame(string s) {
        
        int n=s.size();
        int a=0,b=0;
        
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='A' && s[i-1]=='A' && s[i+1]=='A')
            {
                a++;
            }
            if(s[i]=='B' && s[i-1]=='B' && s[i+1]=='B')
            {
                b++;
            }
        }
        
        return a>b;
    }
};