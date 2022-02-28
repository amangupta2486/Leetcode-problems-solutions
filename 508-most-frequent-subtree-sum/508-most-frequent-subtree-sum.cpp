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
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int s=root->val;
        int l=0,r=0;

        if(root->left!=NULL)
        {
            l=solve(root->left);
        }
        
        if(root->right!=NULL)
        {
            r=solve(root->right);
        }
        
        int ans=s+l+r;
        mp[ans]++;
        
        return ans;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        solve(root);
        
        int mx=0;
        
        vector<int> v;
        
        for(auto i:mp)
        {
            if(i.second>mx)
            {
                mx=i.second;
            }
        }
        
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                v.push_back(i.first);
            }
        }
        
        return v;
    }
};