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
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        
        solve(root);
        
        int ans=100000;
        
        int n=v.size();
        
        for(int i=0;i<n-1;i++)
        {
            ans=min(ans,v[i+1]-v[i]);
        }
        
        return ans;
    }
};