class Solution {
public:
    int longestValidParentheses(string s) {
        

        stack<int> st;
        int n=s.size();
        
        st.push(-1);
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {                  
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                
                else
                {
                    auto p=st.top();
                    ans=max(ans,i-p);
                }
                
            }
            
        }
        
        return ans;
    }
};