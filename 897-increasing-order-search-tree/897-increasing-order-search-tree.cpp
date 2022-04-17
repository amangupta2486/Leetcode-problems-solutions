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
    
    TreeNode* h=new TreeNode(1);
    TreeNode* r=h;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        h=h->right=new TreeNode(root->val);
        solve(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root==NULL)
        {
            return root;
        }
        
        solve(root);

        return r->right;
        
    }
};