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
    
    int ans=0;
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        int lmx=0,rmx=0;
        
        if(root->left!=NULL && root->left->val==root->val)
        {
            lmx=1+l;
        }
        
        if(root->right!=NULL && root->right->val==root->val)
        {
            rmx=1+r;
        }
        
        ans=max(ans,lmx+rmx);
        
        return max(lmx,rmx);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        
        solve(root);
        
        return ans;
    }
};