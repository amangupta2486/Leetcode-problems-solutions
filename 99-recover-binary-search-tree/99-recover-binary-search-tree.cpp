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
    
    TreeNode* first=NULL;
    TreeNode* last=NULL;
    TreeNode* prev=new TreeNode(INT_MIN);
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        
        if(first==NULL && prev->val>root->val)
        {
            first=prev;
        }
        
        if(first!=NULL && prev->val>root->val)
        {
            last=root;
        }
        
        prev=root;
        
        solve(root->right);
        
    }
    void recoverTree(TreeNode* root) {
        solve(root);
        
        int t=first->val;
        first->val=last->val;
        last->val=t;
        
    }
};