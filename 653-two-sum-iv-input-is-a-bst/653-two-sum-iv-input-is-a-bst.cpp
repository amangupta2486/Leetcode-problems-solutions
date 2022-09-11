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
    
    map<int,int> mp;
    
    int ans=0;
    
    void solve(TreeNode* root, int k)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left,k);
        
        int x=root->val;
        
        if(mp[k-x]>0)
        {
            ans=1;
        }
        
        mp[x]++;
        
        solve(root->right,k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        solve(root,k);
        
        return ans;
    }
};