```
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
class Solution {
public:
​
ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* p= new ListNode();
p->next=head;
ListNode* slow =p;
ListNode* fast =p;
while(n--)
{
fast=fast->next;
}
while(fast->next!=NULL)
{
slow=slow->next;
fast=fast->next;
}
slow->next=slow->next->next;
return p->next;
}
};
​
​
```