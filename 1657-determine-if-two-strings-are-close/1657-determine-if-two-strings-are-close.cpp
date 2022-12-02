class Solution {
public:
    bool closeStrings(string w1, string w2) {
        
        multiset<int> s1,s2;
        vector<int> v1(26,0),v2(26,0);
        set<char> s3,s4;
        
        for(auto x:w1)
        {
            v1[x-'a']++;
            s3.insert(x);
        }
        
        for(auto x:w2)
        {
            v2[x-'a']++;
            s4.insert(x);
        }
        
        for(int i=0;i<26;i++)
        {
            if(v1[i]!=0)
            {
                s1.insert(v1[i]);
            }
        }
        
        for(int i=0;i<26;i++)
        {
            if(v2[i]!=0)
            {
                s2.insert(v2[i]);
            }
        }
        
        return s1==s2 && s3==s4;
    }
};