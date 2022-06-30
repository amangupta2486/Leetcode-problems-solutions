class LRUCache {
public:
    
    struct Node{
        int key;
        int val;
        Node* next=NULL;
        Node* prev=NULL;
        
        Node(int x,int y){
            key=x;
            val=y;
        }
    };
    
    int cap;
    map<int,int> mpval;
    unordered_map<int,Node*> mp;

    Node* head=new Node(0,0);
    Node* tail=new Node(0,0);
    
    LRUCache(int capacity) {
        cap=capacity;
        
        head->next=tail;
        tail->prev=head;
    }
    
    void addnode(Node* node)
    {
        Node* temp=head->next;
        node->next=temp;
        temp->prev=node;
        head->next=node;
        node->prev=head;
    }
    
    void deletenode(Node* node)
    {
        Node* nodeprev=node->prev;
        Node* nodenxt=node->next;
        nodeprev->next=nodenxt;
        nodenxt->prev=nodeprev;
    }
    int get(int key) {
        
        if(mp.find(key)!=mp.end())
        {
            Node* res=mp[key];
            int val=res->val;
            mp.erase(key);
            deletenode(res);
            addnode(res);
            mp[key]=head->next;
            
            return val;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        
        if(mp.find(key)!=mp.end())
        {
            Node* node=mp[key];
            mp.erase(key);
            deletenode(node);
        }
        
        if(mp.size()==cap)
        {
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        
        addnode(new Node(key,value));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */