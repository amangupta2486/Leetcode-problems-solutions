class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& t) {
        
        int n=t.size();
        auto a=t;
        long long s=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
       
        
        vector<vector<int>> q;
        
        for(int i=0;i<n;i++)
        {
            q.push_back({t[i][0],t[i][1],i});
        }
        
        sort(q.begin(),q.end());
        
        vector<int> ans;
        
        //ans.push_back(0);
        int i=0;
        //vector<vector<int>> pq;
        int prev=0;
        
        while(i<n || !pq.empty())
        {
            if(pq.empty() && s<q[i][0])
            {
                s=q[i][0];
            }
            
            while(i<n && q[i][0]<=s)
            {
                pq.push({q[i][1],q[i][2]});
                //cout<<i<<endl;
                i++;
            }
            
            
            if(!pq.empty())
            {
                auto x=pq.top();
                s+=pq.top().first;
                ans.push_back(x.second);
                //cout<<s<<" "<<x.first<<" " <<x.second<<endl;
                pq.pop();
                //pq.erase(pq.begin());
            }
            
            // else
            // {
            //     s+=q[i][1];
            //     ans.push_back(q[i][2]);
            //     i++;
            // }
        }
        
        return ans;
    }
};