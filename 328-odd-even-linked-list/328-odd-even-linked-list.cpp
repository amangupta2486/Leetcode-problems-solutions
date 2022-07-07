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
    ListNode* oddEvenList(ListNode* head) {
        
        vector<int> v;
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        ListNode* a=new ListNode(0);
        ListNode* b=a;
        
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
            {
                p=p->next=new ListNode(v[i]);
            }
            else
            {
                a=a->next=new ListNode(v[i]);
            }
        }
        
        
        p->next=b->next;
        
        return q->next;
        
    }
};