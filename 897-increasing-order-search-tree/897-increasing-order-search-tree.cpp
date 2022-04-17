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
    
    vector<int> v;
    
//     TreeNode* h;
//     TreeNode* r=h;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        v.push_back(root->val);
        //h=h->right=new TreeNode(root->val);
        solve(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        //h=root;
        if(root==NULL)
        {
            return root;
        }
        
        solve(root);
        
        TreeNode* h=new TreeNode(1);
        TreeNode* r=h;
        
        for(auto i:v)
        {
            h=h->right=new TreeNode(i);
        }
        return r->right;
        
    }
};