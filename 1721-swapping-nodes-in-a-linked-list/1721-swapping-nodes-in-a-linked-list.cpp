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
    
    int len(ListNode* head)
    {
        int n=0;
        
        while(head!=NULL)
        {
            head=head->next;
            n++;
        }
        
        return n;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;    
        }
        
        int n=len(head);
        
        k=k%n;
        cout<<k<<endl;
        vector<int> v;
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        if(k%n!=0)
        k--;
        
        swap(v[k],v[v.size()-k-1]);
        
        ListNode* p=new ListNode(1);
        ListNode* q=p;
        
        for(int i=0;i<v.size();i++)
        {
            p=p->next=new ListNode(v[i]);
        }
        
        return q->next;
        
    }
};