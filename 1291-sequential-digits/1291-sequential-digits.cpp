class Solution {
public:
    vector<int> sequentialDigits(int l, int h) {
        
        queue<int> q;
        
        for(int i=1;i<=9;i++)
        {
            q.push(i);
        }
        
        vector<int> ans;
        
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            
            if(p>=l &&p<=h)
            {
                ans.push_back(p);
            }
            
            if(p>h)
            {
                break;
            }
            
            int x=p%10;
            int num = p*10 + (x+1);
            
            if(x<9)
            {
                q.push(num);
            }
        }
        
        return ans;
    }
};