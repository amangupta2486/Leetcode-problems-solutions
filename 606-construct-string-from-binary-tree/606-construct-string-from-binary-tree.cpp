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
    
    string ans="";
    
    string solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return "";
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            return to_string(root->val);
        }

        if(root->right==NULL)
        {
           return to_string(root->val) + "(" + solve(root->left) +")";
        }
        
        return to_string(root->val) + "(" + solve(root->left) +")" + "(" + solve(root->right) +")";
    }
    
    string tree2str(TreeNode* root) {
        
        return solve(root);

    }
};