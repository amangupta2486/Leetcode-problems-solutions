/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        vector<int> v,p;
        
        ListNode* a1=new ListNode(0);
        ListNode* a2=a1;
        ListNode* b1=new ListNode(0);
        ListNode* b2=b1;
        
        while(head!=NULL)
        {
            int a=head->val;
            
            if(a<x)
            {
                a1->next=head;
                a1=a1->next;
            }
            else
            {
               b1->next=head;
               b1=b1->next;
            }
            
            head=head->next;
        }
        b1->next=NULL;
        
        a1->next=b2->next;
        
        return a2->next;
        
    }
};