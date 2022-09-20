class Solution {
public:
    int countStudents(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        int t=10000;
        
        queue<int> q;
        
        for(auto x:a)
        {
            q.push(x);
        }
        
        int i=0;
        
        while(t>0 && !q.empty())
        {
            if(q.front()==b[i])
            {
                q.pop();
                i++;
            }
            
            else
            {
                q.push(q.front());
                q.pop();
            }
            
            t--;
        }
        
        return q.size();
    }
};