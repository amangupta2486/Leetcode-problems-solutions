class Solution {
public:
    int minimumDeviation(vector<int>& a) {
        
        int n=a.size();
        
       // priority_queue<int,vector<int>,greater<int>> q;
        
        priority_queue<int> q;
        
        int mx=INT_MIN;
        int mi=INT_MAX;
    
        for(int i=0;i<n;i++)
        {
            int p=a[i];         
            
            if(p%2!=0 )
            {
                p=p*2;
            }

            a[i]=p;
            
            mx=max(mx,a[i]);
            mi=min(mi,a[i]);
            
            q.push(a[i]);
        }

       
        
        int ans=mx-mi;
        

        while((q.top())%2==0)
        {
            int p=q.top();
           
            q.pop();
            ans=min(ans,p-mi);
            
            p=p/2;
            
            mi=min(mi,p);
            
            q.push(p);
        }
        
        
        return min(ans,q.top()-mi);
    }
};