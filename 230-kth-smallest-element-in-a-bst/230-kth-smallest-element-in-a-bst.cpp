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

    int ans;
    
    void solve(TreeNode* root,int &c,int k)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left,c,k);
        c++;
        if(c==k)
        {
            ans=root->val;
        }
        solve(root->right,c,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        int c=0;
        solve(root,c,k);

        return ans;
    }
};