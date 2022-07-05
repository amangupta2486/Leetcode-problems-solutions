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
    
    void solve(TreeNode* root, int t,long long p)
    {
        if(root==NULL)
        {
            return;
        }
        
        p=p+root->val;
        
        if(p==t)
        {
            ans++;
        }
        
        if(mp[p-t]>0)
        {
            ans+=mp[p-t];
        }

        mp[p]++;
        
        solve(root->left,t,p);
        solve(root->right,t,p);
        
        mp[p]--;
        
    }
    int pathSum(TreeNode* root, int t) {
        
      long long p=0;

      solve(root,t,p);
        
      return ans;
    }
};