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
    
    TreeNode* solve(vector<int>& a,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int m=(i+j)/2;
        
        TreeNode* root=new TreeNode(a[m]);
        root->left = solve(a,i,m-1);
        root->right= solve(a,m+1,j);
        
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> v;
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        int n=v.size();
        
        return solve(v,0,n-1);
    }
};