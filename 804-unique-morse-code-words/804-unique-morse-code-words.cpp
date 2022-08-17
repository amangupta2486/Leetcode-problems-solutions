class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        
        for(auto x:w)
        {
            string b="";
            
            for(auto j:x)
            {
                b+=s[j-'a'];
            }
            
            st.insert(b);
        }
        
        return st.size();
    }
};