class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        
        int n=p.size();
        
        priority_queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            q.push(p[i]);
        }
        
        while(k--)
        {
            auto p=q.top();
            q.pop();
            
            int x=p/2;
            
            if(p%2==1)
            {
                x++;
            }
            
            q.push(x);
        }
        
        int ans=0;
        
        while(!q.empty())
        {
            ans+=q.top();
            q.pop();
        }
        
        return ans;
    }
};