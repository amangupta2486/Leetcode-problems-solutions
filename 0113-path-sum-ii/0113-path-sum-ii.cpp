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
    
    vector<vector<int>> ans;
    
    void solve(TreeNode* root,int s, int t,vector<int> v)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=root->val;
        v.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL)
        {
            if(s==t)
            ans.push_back(v);
            
            return;
        }
        
        solve(root->left,s,t,v);
        solve(root->right,s,t,v);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        
        vector<int> v;
        
        solve(root,0,t,v);
        
        return ans;
    }
};