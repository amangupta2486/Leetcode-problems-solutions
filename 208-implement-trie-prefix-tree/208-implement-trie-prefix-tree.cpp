struct Node{
    public:
    
    Node* link[26];
    bool flag=false;
    
    bool containskey(char ch)
    {
        return link[ch-'a']!=NULL;
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

class Trie {
public:
    
    Node* root;
    
    Trie() {
        root=new Node();
    }
    
    void insert(string w) {
        
        Node* node=root;
        int n=w.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->containskey(w[i]))
            {
                node->put(w[i],new Node());
            }
            node=node->get(w[i]);
        }
        
        node->setEnd();
    }
    
    bool search(string w) {
        Node* node=root;
        int n=w.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->containskey(w[i]))
            {
                return 0;
            }
            node=node->get(w[i]);
        }
        
        return node->isEnd();
    }
    
    bool startsWith(string p) {
        Node* node=root;
        int n=p.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->containskey(p[i]))
            {
                return 0;
            }
            node=node->get(p[i]);
        }
        
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */