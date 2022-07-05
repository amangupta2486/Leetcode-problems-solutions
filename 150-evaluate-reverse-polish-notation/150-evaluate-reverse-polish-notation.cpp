class Solution {
public:
    int evalRPN(vector<string>& a) {
        
        int n=a.size();
        
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]=="+")
            {
                auto p=s.top();
                s.pop();
                auto q=s.top();
                s.pop();
                
                int x=q+p;
                s.push(x);
            }
            else if(a[i]=="*")
            {
                auto p=s.top();
                s.pop();
                auto q=s.top();
                s.pop();
                
                int x=q*p;
                s.push(x);
            }
            else if(a[i]=="/")
            {
                auto p=s.top();
                s.pop();
                auto q=s.top();
                s.pop();
                
                int x=q/p;
                s.push(x);
            }
            else if(a[i]=="-")
            {
                auto p=s.top();
                s.pop();
                auto q=s.top();
                s.pop();
                
                int x=q-p;
                s.push(x);
            }
            else
            {
                //cout<<a[i]<<" ";
                
                int x=stoi(a[i]);
                s.push(x);
            }
        }
        
        return s.top();
    }
};