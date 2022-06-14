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
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        int n=len(head);
        
        if(head==NULL || head->next==NULL || k==0 )
        {
            return head;
        }
        if(k!=1 && k%n==0)
        {
            return head;
        }
        if(k>=n)
        k=k%n;
        
        int d=n-k-1;
        //cout<<n<<" "<<d<<endl;
        ListNode* p=head;
        
        while(d>0)
        {
            head=head->next;
            d--;
        }
        
        ListNode* q=head;
        ListNode* r=head->next;
        //cout<<q->val<<endl;
        
        while(head->next!=NULL)
        {
            head=head->next;
        }
        q->next=NULL;
        
        head->next=p;
        
        return r;
    }
};