class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        int n=h.size();
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int ans=0,f=0;
        int i=0;
        
        for(i=0;i<n-1;i++)
        {
            int d=h[i+1]-h[i];
            
            if(d>0)
            {
                pq.push(d);
                
                if(pq.size()>l)
                {
                    int p=pq.top();
                    pq.pop();
                    
                    if(b-p>=0)
                    {
                        b-=p;
                        ans=i;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        
        return i;
    }
};