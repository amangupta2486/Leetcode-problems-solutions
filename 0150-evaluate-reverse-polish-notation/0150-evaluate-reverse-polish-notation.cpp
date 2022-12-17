
class Solution {
public:
    int evalRPN(vector<string>& t) {
        
        stack<long long> s;
        int n=t.size();
        
        for(int i=0;i<n;i++)
        {
            if(t[i]=="+")
            {
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                
                int d=a+b;
                s.push(d);
            }
            
            else if(t[i]=="-")
            {
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                
                long long d=a-b;
                s.push(d);
            }
            
            else if(t[i]=="*")
            {
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                
                long long d=a*b;
                s.push(d);
            }
            
            else if(t[i]=="/")
            {
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                
                long long d=a/b;
                s.push(d);
            }
            
            else
            {
              s.push(stoll(t[i]));
            }
        }
        
        return s.top();
    }
};