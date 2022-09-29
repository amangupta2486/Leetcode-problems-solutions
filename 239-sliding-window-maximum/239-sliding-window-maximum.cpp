class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        
        int n=a.size();
        
        vector<int> ans;
        
        deque<int> q;
        
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && a[q.back()]<=a[i])
            {
                q.pop_back();
            }
            
            q.push_back(i);
        }
        
        ans.push_back(a[q.front()]);
        
        for(int i=k;i<n;i++)
        {
            if(q.size()>0 && q.front()<=i-k)
            {
                q.pop_front();
            }
            
            while(!q.empty() && a[q.back()]<=a[i])
            {
                q.pop_back();
            }
            
            q.push_back(i);
            
            ans.push_back(a[q.front()]);     
        }
        
        return ans;
    }
};