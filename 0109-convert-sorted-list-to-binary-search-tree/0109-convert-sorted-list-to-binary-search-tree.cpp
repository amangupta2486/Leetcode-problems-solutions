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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> a;
    
    TreeNode* solve(int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int m=(i+j)/2;
        TreeNode* root=new TreeNode(a[m]);
        root->left=solve(i,m-1);
        root->right=solve(m+1,j);
        
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        while(head!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        
        int n=a.size();

        return solve(0,n-1);
    }
};