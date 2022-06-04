/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*,Node*> mp;
        
        Node* p=head;
        
        while(p!=NULL)
        {
            Node* q=new Node(p->val);
            mp[p]=q;
            p=p->next;
        }
        
        Node* r=head;
        
        while(r!=NULL)
        {
            Node* x=mp[r];
            Node* y=mp[r->random];
            Node* z=mp[r->next];
            x->next=z;
            x->random=y;
            
            r=r->next;
        }
        
        return mp[head];
    }
};