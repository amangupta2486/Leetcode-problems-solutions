class Solution {
public:
    string removeKdigits(string s, int k) {
        
        int n=s.size();
        
        //stack<char> st;
        
        string st="";
        int i=0;
        
        while(i<n)
        {
            while(st.size()>0 && st[st.size()-1]>s[i] && k>0)
            {
                st.pop_back();
                k--;
            }
            
            st.push_back(s[i]);
            i++;
        }
        
        while(st.size()>0 && k>0)
        {
            st.pop_back();
            k--;
        }

        int j=0;
        
        while(j<st.size() && st.size()>0)
        {
            if(st[j]=='0')
            {
                st.erase(j,1);
            }
            else
            {
                break;
            }
        }
        
        if(st.size()==0)
        {
            return "0";
        }
        
        return st;
    }
};