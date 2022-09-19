class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        
        int n=0,m=0;
        
        int a=bound;
        
        if(x==1)
        {
            n=1;
            a=0;
        }
        
        while(a>0)
        {
            n++;
            a=a/x;
        }
        
        int b=bound;
        
        if(y==1)
        {
            m=1;
            b=0;
        }
        
        while(b>0)
        {
            m++;
            b=b/y;
        }
        
        vector<int> ans;
        
        set<int> s;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int d=pow(x,i)+pow(y,j);
                
                if(d<=bound)
                {
                    s.insert(d);
                }
            }
        }
        
        for(auto x:s)
        {
            ans.push_back(x);
        }
        
       // sort(ans.begin(),ans.end());
        
        return ans;
    }
};