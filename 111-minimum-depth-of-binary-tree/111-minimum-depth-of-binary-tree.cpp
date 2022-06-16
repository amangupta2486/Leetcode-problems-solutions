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
    
    int ans=INT_MAX;
    
    void solve(TreeNode* root,int c)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            ans=min(ans,c);
            return;
        }
        
        solve(root->left,c+1);      
        solve(root->right,c+1);

    }
    int minDepth(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        int c=1;
        solve(root,c);
        
        return ans;
    }
};