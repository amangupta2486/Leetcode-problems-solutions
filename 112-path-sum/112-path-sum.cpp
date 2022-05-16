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
    
    void solve(TreeNode* root,int s, int t)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(s==t)
            {
                ans=1;
            }    
            return;
        }
        
        
        solve(root->left,s,t);
        solve(root->right,s,t);
    }
    bool hasPathSum(TreeNode* root, int t) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        solve(root,0,t);
        
        return ans;
    }
};