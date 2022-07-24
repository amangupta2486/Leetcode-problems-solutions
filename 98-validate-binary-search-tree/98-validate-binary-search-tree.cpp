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
    
    int p=INT_MIN;
    int ans=1;
    int f=0;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        

        if(p>=root->val && f)
        {
            ans=0;
        }
        
        f=1;
        p=root->val;
        
        solve(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        
        solve(root);
        
        return ans;
    }
};