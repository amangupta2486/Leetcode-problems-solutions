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
            Node* newNode = new Node(p->val);
            mp[p]=newNode;
            p=p->next;
        }
        
        Node* q=head;
        
        while(q!=NULL)
        {
            Node* r=mp[q];
            
            r->next=mp[q->next];
            r->random=mp[q->random];
            
            q=q->next;
        }
        
        return mp[head];

    }
};