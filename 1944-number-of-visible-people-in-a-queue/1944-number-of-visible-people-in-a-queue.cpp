class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        
        int n=h.size();
        
        stack<int> s;
        vector<int> v(n,0);

        for(int i=n-1;i>=0;i--)
        {
            int c=0;
            
            while(!s.empty() && s.top()<h[i])
            {
                c++;
                s.pop();
            }

            v[i]+=c;
            
            if(!s.empty())
            {
                v[i]+=1;
            }
            
            s.push(h[i]);
        }
        
        return v;
    }
};