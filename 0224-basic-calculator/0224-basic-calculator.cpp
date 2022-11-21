class Solution {
public:
    int calculate(string s) {
        
        int n=s.size();
        int num=0,res=0,sign=1;
        
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                num = (10*num) + (s[i]-'0');
            }
            
            else if(s[i]=='+')
            {
                res+= sign*num;
                num=0;
                sign=1;
            }
            
            else if(s[i]=='-')
            {
                res+= sign*num;
                num=0;
                sign=-1;
            }
            
            else if(s[i]=='(')
            {
                st.push(res);
                st.push(sign);
                res=0;
                sign=1;
            }
            
            else if(s[i]==')')
            {
                res+= sign*num;
                num=0;
                
                sign=st.top();
                st.pop();
                
                int ans=st.top();
                st.pop();
                
                res= ans + (sign*res);
            }
            
        }
        
        res+=(sign*num);
        
        return res;
    }
};