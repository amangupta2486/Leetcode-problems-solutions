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
    
    unordered_map<long,long> mp;
    
    long ans=0;
    
    void solve(TreeNode* root, long t,long s)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=root->val;
        
        if(s==t)
        {
            ans++;
        }
        
        if(mp[s-t]>0)
        {
            ans+=mp[s-t];
        }
        
        mp[s]++;
        
        solve(root->left,t,s);
        
        solve(root->right,t,s);
        
        mp[s]--;
    }
    
    int pathSum(TreeNode* root, int t) {
        
        solve(root,t,0);
        
        return ans;
    }
};