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
    
    void solve(TreeNode* root,int p,int q)
    {
        if(root==NULL)
        {
            return;
        }
        
        ans=max({ans,abs(p-root->val),abs(q-root->val)});
        
        solve(root->left,max(p,root->val),min(q,root->val));
        
        solve(root->right,max(p,root->val),min(q,root->val));
    }
        
    int maxAncestorDiff(TreeNode* root) {
        
        int p=root->val;
        int q=root->val;
        
        solve(root,p,q);
        
        return ans;
    }
};