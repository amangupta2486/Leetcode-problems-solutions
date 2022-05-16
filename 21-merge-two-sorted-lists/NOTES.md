```
class Solution {
public:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
ListNode* p=new ListNode(1);
ListNode* q= p;
while(l1!=NULL && l2!=NULL)
{
if(l1->val<=l2->val)
{
p=p->next=new ListNode(l1->val);
l1=l1->next;
}
else
{
p=p->next=new ListNode(l2->val);
l2=l2->next;
}
}
while(l1!=NULL)
{