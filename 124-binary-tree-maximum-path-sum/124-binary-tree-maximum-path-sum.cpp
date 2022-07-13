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
    
    int ans=-1001;
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        ans=max({ans,root->val,root->val+l+r,root->val+l,root->val+r});
        
        return root->val+max({l,r,0});
    }
    int maxPathSum(TreeNode* root) {
        
        solve(root);
        
        return max(ans,root->val);
    }
};