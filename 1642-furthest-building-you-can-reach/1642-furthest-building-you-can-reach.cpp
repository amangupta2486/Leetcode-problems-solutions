class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        int n=h.size();
        
        priority_queue<long long,vector<long long>,greater<long long>> q;
        
        long long s=0,ans=-1;
        
        for(int i=0;i<n-1;i++)
        {
            long long d=h[i+1]-h[i];
            
            if(d>0)
            {
                q.push(d);
                
                if(q.size()>l)
                {
                    s+=q.top();
                    q.pop();
                }
            }
            
            if(s<=b)
            {
                ans=i;
            }
        }
        
        if(ans==-1)
        {
            return 0;
        }
        
        return ans+1;
    }
};