class Solution {
public:
    int furthestBuilding(vector<int>& a, int b, int l) {
        
        int n=a.size();
        
        int ans=0;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int i=0;
        
        for(;i<n-1;i++)
        {
            int x=a[i+1]-a[i];
            
            if(x>0)
            {
                pq.push(x);
                
                if(pq.size()>l)
                {
                    int p=pq.top();
                    pq.pop();
                
                    b-=p;
                    
                }
            }
            
             if(b<0)
            {
                break;
            }
        }
        
        if(i==n)
        {
            return n-1;
        }
        
        return i;
    }
};