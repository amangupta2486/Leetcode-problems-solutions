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
        
        Node* h=head;
        Node* q=h;
        
        while(q!=NULL)
        {
            Node* p=new Node(q->val);
            
            mp[q]=p;
            
            q=q->next;
        }
        
        Node* s=head;
        Node* r=s;

        while(r!=NULL)
        {
            //cout<<r->val<<" ";
            
            Node* a=mp[r];
            Node* b=mp[r->next];
            a->next=b;
            a->random=mp[r->random];
            
            r=r->next;
        }
        
        return mp[head];
    }
};