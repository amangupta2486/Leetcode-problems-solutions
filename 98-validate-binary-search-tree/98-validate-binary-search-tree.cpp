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
    
    
    TreeNode* prev=NULL;
    int ans=1;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
            
        solve(root->left);
        
        if(prev!=NULL)
        {
            if(root->val<=prev->val)
            {
                ans=0;
            }
        }
        
        prev=root;
        
        solve(root->right);
    }
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL)
        {
            return 1;    
        }
        
        solve(root);
        
        return ans;
    }
};