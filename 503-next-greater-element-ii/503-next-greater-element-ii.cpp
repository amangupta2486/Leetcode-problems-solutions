class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            a.push_back(a[i]);
        }
        
        int p;
        stack<int> s;
        
        for(int i=2*n-1;i>=0;i--)
        {
            p=a[i];
            while(!s.empty() && s.top()<=a[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                a[i]=-1;
            }
            else
            {
                a[i]=s.top();
            }
            s.push(p);
        }
        
        while(n--)
        {
            a.pop_back();
        }
        
        return a;
    }
};