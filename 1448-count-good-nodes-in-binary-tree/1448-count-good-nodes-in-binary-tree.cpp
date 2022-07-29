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

    void solve(TreeNode* root,int p)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->val>=p)
        {
            ans++;
        }

        solve(root->left,max(p,root->val));

        solve(root->right,max(p,root->val));
    }
    
    int goodNodes(TreeNode* root) {
        
        
        solve(root,root->val);
        
        return ans;
    }
};