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
    
    void solve(TreeNode* root, int t,int s,vector<int> v)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=root->val;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            //cout<<s<<" ";
            if(s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        solve(root->left,t,s,v);
        solve(root->right,t,s,v);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        
        vector<int> v;
        solve(root,t,0,v);
        return ans;
    }
};