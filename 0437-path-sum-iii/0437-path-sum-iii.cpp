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
    
    unordered_map<long long,int> mp;
    int ans=0;
    
    void solve(TreeNode* root,long long p,int t)
    {
        if(root==NULL)
        {
            return;
        }
        
        p+=root->val;
        
        if(p==t)
        {
            ans++;
        }
        
        ans+=mp[p-t];
        
        mp[p]++;
        
        solve(root->left,p,t);
        solve(root->right,p,t);
        
        mp[p]--;
    }
    
    int pathSum(TreeNode* root, int t) {
        
        solve(root,0,t);
        
        return ans;
    }
};