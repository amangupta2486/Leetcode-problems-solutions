class Solution {
public:
    bool wordPattern(string p, string s) {
        
        map<string,int> m1;
        map<char,int> m2;
        istringstream in(s);
        
        int n=p.size();
        
        int i=0;
        
        for(string word;in>>word;i++)
        {
            if(i==n || m2[p[i]]!=m1[word])
            {
                return false;
            }
            
            m1[word]=m2[p[i]]=i+1;
        }
        
        return i==n;
    }
};