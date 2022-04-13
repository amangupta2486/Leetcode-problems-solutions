class Solution {
public:
    int scheduleCourse(vector<vector<int>>& c) {
        
        int n=c.size();
        
        int ans=0;
        
        sort(c.begin(),c.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        priority_queue<int> p;
        
        int time=0;
        
        for(int i=0;i<n;i++)
        {
            if(time+c[i][0]<=c[i][1])
            {
                time+=c[i][0];
                ans++;
                p.push(c[i][0]);
            }
            
            else if(!p.empty() && p.top()>c[i][0])
            {
                time+=c[i][0]-p.top();
                p.pop();
                p.push(c[i][0]);
            }
        }
        
        return ans;
    }
};