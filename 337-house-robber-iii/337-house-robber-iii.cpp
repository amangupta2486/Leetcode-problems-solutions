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
    
    unordered_map<TreeNode*,int> mp;
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        if(mp.find(root)!=mp.end())
        {
            return mp[root];
        }
        int ans=0;
        
        if(root->left!=NULL)
        {
            ans+=solve(root->left->left)+solve(root->left->right);
        }
        if(root->right!=NULL)
        {
            ans+=solve(root->right->left)+solve(root->right->right);
        }
        
        return mp[root]=max({ans+root->val,solve(root->left)+solve(root->right)});
    }
    
    int rob(TreeNode* root) {
        
        return solve(root);
    }
};