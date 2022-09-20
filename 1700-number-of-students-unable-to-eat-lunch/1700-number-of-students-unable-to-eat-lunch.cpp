class Solution {
public:
    int countStudents(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        int t=100;
        
        queue<int> q;
        
        for(auto x:a)
        {
            q.push(x);
        }
        
        int i=0;
        
        int p=n;
        
        while(t>0 && !q.empty())
        {
            int k=q.size();
            p=k;
            
            while(k--)
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
            }
            
            if(p==q.size())
            {
                return p;
            }
            
            t--;
        }
        
        return q.size();
    }
};