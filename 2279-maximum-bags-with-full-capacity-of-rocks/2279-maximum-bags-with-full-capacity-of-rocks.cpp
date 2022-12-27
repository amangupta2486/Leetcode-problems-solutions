class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& r, int ad) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int n=cap.size();
         
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            int d=cap[i]-r[i];
            
            if(d>0)
            {
                pq.push(d);
            }
            
            else if(d==0)
            {
                cnt++;
            }
        }
        
        //cout<<pq.size()<<endl;
        
        int f=1;
       
        
        while(!pq.empty() && f==1)
        {
            int p=pq.top();
            pq.pop();
            //cout<<p<<endl;
            
            if(p<=ad)
            {
                ad-=p;
                cnt++;
            }
            else
            {
                f=0;
            }
        }
        
        return cnt;
    }
};