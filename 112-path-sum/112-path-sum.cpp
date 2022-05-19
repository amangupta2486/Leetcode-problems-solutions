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
    
    void solve(TreeNode* root, int t,int s)
    {
        if(root==NULL)
        {
            return; 
        }
        
        s+=root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(t==s)
            ans=1;
            return;
        }
        
        solve(root->left,t,s);
        solve(root->right,t,s);
    }
    bool hasPathSum(TreeNode* root, int t) {
        

        solve(root,t,0);
        
        return ans;
    }
};