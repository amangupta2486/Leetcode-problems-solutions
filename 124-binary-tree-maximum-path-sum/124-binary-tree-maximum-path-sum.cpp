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
    
    int ans=-100000;
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        int x=root->val;
        
        ans=max({ans,x+l+r,x+l,x+r,x});
        
        return x+max({l,r,0});
    }
    
    int maxPathSum(TreeNode* root) {
        
        //ans=max(ans,solve(root));
        
        solve(root);
        
        return ans;
    }
};