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
    
    void solve(TreeNode* root,int s)
    {
        if(root==NULL)
        {
            return;
        }
        
        s*=10;
        s+=root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(s);
            return;
        }
        
        solve(root->left,s);
        solve(root->right,s);
        
    }
    
    int sumNumbers(TreeNode* root) {
        
        solve(root,0);
        
        int ans=0;
        
        for(auto i:v)
        {
            ans+= i;
        }
        
        return ans;
    }
};