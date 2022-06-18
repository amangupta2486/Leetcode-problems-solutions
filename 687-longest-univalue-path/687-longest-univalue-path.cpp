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
        
        int l_mx=0,r_mx=0;
        
        if(root->left && root->left->val == root->val)
        {
            l_mx=1+l;
        }
        if(root->right && root->right->val == root->val)
        {
            r_mx=1+r;
        }
        
        ans=max(ans,l_mx+r_mx);
        
        return max(l_mx,r_mx);
    }
    int longestUnivaluePath(TreeNode* root) {
        
        ans=0;
        solve(root);
        
        return ans;
    }
};