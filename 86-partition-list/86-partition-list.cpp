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
        
        while(head!=NULL)
        {
            int a=head->val;
            
            if(a<x)
            {
                v.push_back(a);
            }
            else
            {
                p.push_back(a);
            }
            
            head=head->next;
        }
        
        ListNode* r=new ListNode(0);
        ListNode* s=r;
        
        for(auto i:v)
        {
            r=r->next=new ListNode(i);
        }
        
        for(auto i:p)
        {
            r=r->next=new ListNode(i);
        }
        
        return s->next;
        
    }
};