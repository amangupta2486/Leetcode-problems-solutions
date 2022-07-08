class Solution {
public:
    
    int p[20005];
    
    int find(int x)
    {
        while(x!=p[x])
        {
            x=p[x];
        }
        
        return x;
    }
    void Union(int a,int b)
    {
        int x=find(a);
        int y=find(b);
        
        if(x!=y)
        {
            p[y]=x;
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        
        for(int i=0;i<20005;i++)
        {
            p[i]=i;
        }
        
        for(auto stone:stones)
        {
            Union(stone[0],stone[1]+10001);
        }
        
        set<int> s;
        
        for(auto stone :stones)
        {
            s.insert(find(stone[0]));
            s.insert(find(stone[1]+10001));
        }
        
        int comp=s.size();
        
        return stones.size()-comp;
    }
};