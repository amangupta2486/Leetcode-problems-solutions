class Solution {
public:
    bool isRobotBounded(string s) {
        
        int n=s.size();
        
        //char l=s[0],r=s[n-1];
        int l=0,r=0,g=0;
        
        int c=0;
        int x=0,y=0;
        int a=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G')
            {
                g++;
                
                if(a==1)
                x++;
                
                if(a==2)
                y--;
                
                if(a==3)
                x--;
                
                if(a==0)
                y++;
            }
            if(s[i]=='L')
            {
                a--;
                a=(a+4)%4;
            }
            if(s[i]=='R')
            {
                a++;
                a=a%4;
            }
        }
        
        return (x==0 && y==0 )|| a!=0;
    }
};