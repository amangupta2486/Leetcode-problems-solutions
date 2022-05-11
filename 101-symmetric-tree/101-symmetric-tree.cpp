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
    
    bool solve(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        if(p==NULL || q==NULL)
        {
            return 0;
        }
        
        if(p->val==q->val)
        {
            return solve(p->left,q->right) && solve(p->right,q->left);
        }
        
        return 0;
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL)
        {
            return 1;
        }
        
        TreeNode* p=NULL;
        TreeNode* q=NULL;
        
        if(root->left)
        {
            p=root->left;
        }
        if(root->right)
        {
            q=root->right;
        }
        
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        if(p==NULL || q==NULL)
        {
            return 0;
        }
        
        if(p->val==q->val)
        {
            return solve(p,q);
        }
        
        return false;
    }
};