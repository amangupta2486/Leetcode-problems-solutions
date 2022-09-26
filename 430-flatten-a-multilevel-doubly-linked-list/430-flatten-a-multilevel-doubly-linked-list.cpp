/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    
    Node* childEnd=NULL;
    Node* currNext=NULL;
    
    void solve(Node* head)
    {
        if(head->next==NULL && head->child==NULL)
        {
            childEnd=head;
            return;
        }
        
        Node* prev;
        
        while(head!=NULL)
        {
            if(head->child!=NULL)
            {
                solve(head->child);
                
                Node* temp=head->next;
                head->child->prev=head;
                head->next=head->child;

                head->child=NULL;
                childEnd->next=temp;
                
                if(temp!=NULL)
                temp->prev=childEnd;
            }
            prev=head;
            head=head->next;
        }
        
        childEnd=prev;
        
    }
    
    Node* flatten(Node* head) {
        
        if(head==NULL)
        {
            return head;    
        }
        
        solve(head);
        
        return head;
    }
};