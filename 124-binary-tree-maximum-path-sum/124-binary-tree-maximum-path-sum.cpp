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
    
    int mx=INT_MIN;
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        if(l<0)
        {
            l=0;
        }
        
        if(r<0)
        {
            r=0;
        }
        
        int ans=root->val+l+r;
       // root->val=ans;
        mx=max(ans,mx);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        
        solve(root);
        
        return mx;
    }
};