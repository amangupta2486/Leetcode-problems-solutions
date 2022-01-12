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
    
    void solve(TreeNode* root, int val)
    {
        if(root==NULL)
        {
             //TreeNode* r=new TreeNode(val);
            return ;
        }
        
        if(root->left==NULL && val<root->val)
        {
            root->left =new TreeNode(val);
            return;
        }
        if(root->right==NULL && val>root->val)
        {
            root->right =new TreeNode(val);
            return;
        }
        if(val>root->val)
        {
            solve(root->right,val);
        }
        
        else
        {
            solve(root->left,val);
        }
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL)
        {
            TreeNode* r=new TreeNode(val);
            return r;
        }
        
        solve(root,val);
        
        return root;
    }
};