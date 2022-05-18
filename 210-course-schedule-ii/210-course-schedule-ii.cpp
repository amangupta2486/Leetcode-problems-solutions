class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> d(n,0);
	    vector<int> v[n];
	    
	    for(auto i:p)
	    {
	        v[i[1]].push_back(i[0]);
	        d[i[0]]++;
	    }
	    
	    queue<int> q;
	    
	    int ans=0;
	    
        vector<int> order;
        
	    for(int i=0;i<n;i++)
	    {
	        if(d[i]==0)
	        {
	            q.push(i);
                order.push_back(i);
	            ans++;
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int k=q.size();
	        
	        while(k--)
	        {
	            auto p=q.front();
	            q.pop();
	            
	            for(auto x:v[p])
	            {
	                d[x]--;
	                
	                if(d[x]==0)
	                {
	                    q.push(x);
                        order.push_back(x);
	                    ans++;
	                }
	            }
	        }
	    }
	    
        vector<int> b;
        
	    return ans==n ? order : b;
        
    }
};