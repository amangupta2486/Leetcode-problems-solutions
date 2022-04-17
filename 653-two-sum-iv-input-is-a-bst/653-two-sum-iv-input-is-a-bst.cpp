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
    vector<int> v;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left);
        v.push_back(root->val);
        mp[root->val]++;
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        
        solve(root);
        
        int n=v.size();
        
        for(int i=0;i<n;i++)
        {
            if(v[i]*2==k && mp[v[i]]<2)
            {
                continue;
            }
            if(mp[k-v[i]]>0)
            {
                return 1;
            }
        }
        
        return 0;
    }
};