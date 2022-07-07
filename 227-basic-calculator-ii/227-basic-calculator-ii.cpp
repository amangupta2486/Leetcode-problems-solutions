class Solution {
public:
    int calculate(string s) {
        
        int n=s.size();
        
        stack<int> st;
        
        int currn=0;
        char op='+';
        //char currch='';
        
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                currn=(currn*10) + (s[i]-'0');
            }
            
            if((!isdigit(s[i]) && s[i]!=' ') || i==n-1)
            {
                //cout<<s[i]<<" "<<i<<endl;
                if(op=='+')
                {
                    st.push(currn);
                }
                
                else if(op=='-')
                {
                    st.push(-currn);
                }
                
                else if(op=='*')
                {
                    int x=st.top();
                    st.pop();
                   // cout<<x<<endl;
                    st.push(x*currn);
                }
                
                else if(op=='/')
                {
                    int x=st.top();
                    st.pop();
                    
                    st.push(x/currn);
                }
                
                op=s[i];
                currn=0;
            }
        }
        
        int ans=0;
        
        while(!st.empty())
        {
            ans+=st.top();
           // cout<<st.top()<<" ";
            st.pop();
        }
        
        return ans;
    }
};