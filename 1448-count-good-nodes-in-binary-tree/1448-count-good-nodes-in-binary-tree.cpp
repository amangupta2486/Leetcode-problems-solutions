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
    
    void solve(TreeNode* root,int x)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->val>=x)
        {
            ans++;
        }
        
        solve(root->left,max(x,root->val));
        solve(root->right,max(x,root->val));
    }
    int goodNodes(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        int x=root->val;
        
        solve(root,-10001);
        
        return ans;
    }
};