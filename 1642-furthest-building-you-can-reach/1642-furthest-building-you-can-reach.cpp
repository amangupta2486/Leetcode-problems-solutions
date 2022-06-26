class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        int n=h.size();
        
        int s=0,ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            int d=h[i+1]-h[i];
            
            if(d>0)
            {
                q.push(d);
                
                if(q.size()>l)
                {
                    s+=q.top();
                    q.pop();
                }
                
                if(s>b)
                {
                    break;
                }
            }
            
            ans=i+1;
        }
        
        return ans;
    }
};