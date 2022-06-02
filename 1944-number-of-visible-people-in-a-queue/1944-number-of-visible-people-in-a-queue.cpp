class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        
        int n=h.size();
        stack<int> s;
        vector<int> ans(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<h[i])
            {
                ans[i]++;
                s.pop();
            }
            
            if(s.size()>0)
            {
                ans[i]++;
            }
            
            s.push(h[i]);
        }
        
        return ans;
    }
};