class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        
        //vector<vector<int>> b;
        
        priority_queue<pair<int,int>> pq;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            pq.push({abs(a[i]-x),a[i]});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        // sort(b.begin(),b.end(),[&](auto &a,auto &b){
        //     return a[0]<b[0] || (a[0]==b[0] && a[1]<b[1]);
        // });
        
        vector<int> ans;
        
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        // for(int i=0;i<k;i++)
        // {
        //     ans.push_back(b[i][1]);
        // }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};