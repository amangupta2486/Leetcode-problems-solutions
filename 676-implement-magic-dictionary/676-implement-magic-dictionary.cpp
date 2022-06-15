struct Node
{
    Node* link[26];
    bool flag= false;
    
    bool conatinKey(char ch)
    {
        return link[ch-'a'];
    }
    
    void put(char ch,Node* node)
    {
        link[ch-'a']=node;
    }
    
    Node* get(char ch)
    {
        return link[ch-'a'];
    }
    
    
    void setEnd()
    {
        flag=true;
    }
    
    bool isEnd()
    {
        return flag;
    }
};

class MagicDictionary {
public:
    Node* root;
    unordered_set<string> s;
    
    MagicDictionary() {
        // root=new Node();
        s.clear();
    }
    
    void buildDict(vector<string> dictionary) {
        
        for(auto i:dictionary)
        {
            s.insert(i);
        }
    }
    
    bool search(string searchWord) {
        
        int n=searchWord.size();
        
        for(int i=0;i<n;i++)
        {
            string b=searchWord;
            
            for(int j=0;j<26;j++)
            {
                b[i]='a'+j;
                
                if(s.count(b)>0 && b!=searchWord)
                {
                    return 1;
                }
            }
        }
        
        return 0;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */