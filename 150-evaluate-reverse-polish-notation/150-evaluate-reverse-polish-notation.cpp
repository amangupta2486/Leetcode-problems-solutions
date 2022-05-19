class Solution {
public:
    int evalRPN(vector<string>& t) {
        
        int n=t.size();
        
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
            if(t[i]=="*")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                
                s.push(p*q);
            }
            else if(t[i]=="+" )
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                
                s.push(p+q);
            }
            else if(t[i]=="-")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                
                s.push(q-p);
            }
            else if(t[i]=="/")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                //cout<<p/q<<endl;
                s.push(q/p);
            }
            else
            {
                //cout<<stoi(t[i])<<" ";
                s.push(stoi(t[i]));
            }
        }
        
        return s.top();
    }
};