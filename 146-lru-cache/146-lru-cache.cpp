class LRUCache {
public:
    
    class Node{
        public:
        int key;
        int val;
        Node* next;
        Node* prev;
        
        Node(int key_,int val_)
        {
            key=key_;
            val=val_;
        }
    };
    
            
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    
    int cap;
    unordered_map<int,Node*> mp;
    
    LRUCache(int capacity) {
        cap=capacity;

        head->next=tail;
        tail->prev=head;
    }
    
    void addnode(Node* newnode)
    {
        Node* temp=head->next;
        head->next=newnode;
        temp->prev=newnode;
        newnode->next=temp;
        newnode->prev=head;
        
    }
    
    void deletenode(Node* delnode)
    {
        Node* delprev=delnode->prev;
        Node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }

    
    int get(int key) {
        
        if(mp.find(key)!=mp.end())
        {
            Node* resnode=mp[key];
            
            int res=resnode->val;
            mp.erase(key);
            deletenode(resnode);
            
            addnode(resnode);
            mp[key]=head->next;
            return res;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        
        if(mp.find(key)!=mp.end())
        {
            Node* resnode=mp[key];
            mp.erase(key);
            deletenode(resnode);
        }
        
        if(mp.size()==cap)
        {
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        
        Node* newnode=new Node(key,value);
        addnode(newnode);
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */