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
    bool flipEquiv(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        
        if(p==NULL || q==NULL || p->val!=q->val)
        {
            return 0;
        }
        
    
        return (flipEquiv(p->left,q->left) && flipEquiv(p->right,q->right))||(flipEquiv(p->left,q->right) && flipEquiv(p->right,q->left));
    }
};