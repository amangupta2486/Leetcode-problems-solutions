class Solution {
public:
    int minCost(string a, vector<int>& t) {
        
        int n=a.size();
        
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            priority_queue<int,vector<int>,greater<int>> q;
            
            if(a[i]==a[i+1])
            {
                q.push(t[i]);
                
                while(i+1<n && a[i]==a[i+1])
                {
                    i++;
                    q.push(t[i]);
                }
            }
            
            while(q.size()>1)
            {
                ans+=q.top();
                q.pop();
            }
        }
        
        return ans;
    }
};