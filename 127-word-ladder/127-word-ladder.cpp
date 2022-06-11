class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        if(beginWord==endWord)
        {
            return 1;
        }
        unordered_set<string> s;
        
        for(auto i:wordList)
        {
            s.insert(i);
        }
        if(s.find(endWord)==s.end())
        {
            return 0;
        }
        
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            string curr=p.first;
            int c=p.second;
            
            if(curr==endWord)
            {
                return c;
            }
            
            int m=curr.size();
            
            for(int i=0;i<m;i++)
            {
                string b=curr;
                
                for(int j=0;j<26;j++)
                {
                    b[i]='a'+j;
                    
                    if(s.count(b)>0)
                    {
                        q.push({b,c+1});
                        s.erase(b);
                    }
                }
            }
        }
        
        return 0;
    }
};