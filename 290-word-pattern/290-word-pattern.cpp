class Solution {
public:
    bool wordPattern(string p, string s) {
        
        map<string,int> m1;
        map<char,int> m2;
        
        set<char> q;
        set<string> w;
        
        unordered_map<char,string> m;
        
        istringstream in(s);
        
        int n=p.size();
        
        // int i=0;
        vector<string> words;
        string word;
        
        for(int i=0;i<n;i++)
        {
            q.insert(p[i]);    
        }
        
        while(in>>word)
        {
            w.insert(word);
            words.push_back(word);
        }
        
        if(words.size()!=p.size() || q.size()!=w.size())
        {
            return false;
        }
        
        for(int i=0;i<n;i++)
        {
            if(m.count(p[i])>0)
            {    
                if(m[p[i]] != words[i])
                {
                    return false;
                }
            }
           
            else
            {
                m[p[i]]=words[i];
            }
        }
        
        return 1;
    }
};