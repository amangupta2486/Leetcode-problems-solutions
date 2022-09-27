class Solution {
public:
    string pushDominoes(string d) {
        
        queue<pair<int,char>> q;
        
        int n=d.size();
        
        for(int i=0;i<n;i++)
        {
            if(d[i]!='.')
            {
                q.push({i,d[i]});
            }
        }
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            int i=p.first;
            char ch=p.second;
            
            if(ch=='L' && i>0 && d[i-1]=='.')
            {
                d[i-1]='L';
                q.push({i-1,'L'});
            }
            
            else if(ch=='R')
            {
                if(i+1<n && d[i+1]=='.')
                {
                    if(i+2<n && d[i+2]=='L')
                    {
                        q.pop();
                    }
                    else
                    {
                        d[i+1]='R';
                        q.push({i+1,'R'});
                    }
                }
            }
        }
        
        return d;
    }
};