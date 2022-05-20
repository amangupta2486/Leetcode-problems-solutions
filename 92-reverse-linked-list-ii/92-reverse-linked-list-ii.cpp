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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<int> v;
        
        ListNode* r=head;
        while(r!=NULL)
        {
            v.push_back(r->val);
            r=r->next;
        }
         
        reverse(v.begin()+left-1,v.begin()+right);

        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        for(int i=0;i<v.size();i++)
        {
            p=p->next=new ListNode(v[i]);
        }
        
        return q->next;
       
    }
};