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

class Trie {
public:
    Node* root;
    
    Trie() {
        root=new Node();    
    }
    
    void insert(string word) {
        Node* node=root;
        int n=word.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->conatinKey(word[i]))
            {
                node->put(word[i],new Node());
            }
            
            node=node->get(word[i]);
        }
        
        node->setEnd();
    }
    
    bool search(string word) {
        
        Node* node=root;
        int n=word.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->conatinKey(word[i]))
            {
                return 0;
            }
            
            node=node->get(word[i]);
        }
        
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        
        Node* node=root;
        int n=prefix.size();
        
        for(int i=0;i<n;i++)
        {
            if(!node->conatinKey(prefix[i]))
            {
               return 0;
            }
            
            node=node->get(prefix[i]);
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