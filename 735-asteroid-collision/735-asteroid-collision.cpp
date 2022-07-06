class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        
        int n=a.size();
        
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
            int f=1;
            
            while(!s.empty() && s.top()>0 && a[i]<0 && s.top()<=abs(a[i]))
            {
                
                if(s.top()==abs(a[i]))
                {
                    f=0;
                    s.pop();
                    break;
                }
                
                s.pop();
            }
            
            if(a[i]<0 && f)
            { 
                if(s.empty())
                s.push(a[i]);
                
                else if(s.top()<0)
                   s.push(a[i]);
            }
            
            else if(a[i]>0)
            {
                s.push(a[i]);
            }
        }
        
        vector<int> ans;
        
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};