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
    
    int ans=0;
    
    unordered_map<int,int> mp;
    
    bool check(vector<int> &v)
    {

        int c=0;
        
        for(auto x:mp)
        {
            if(x.second%2==1)
            {
                c++;
            }
        }
        
        if(c<=1)
        {
            return 1;
        }
        
        return 0;
    }
    
    void solve(TreeNode* root,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        
        int x=root->val;
        
        mp[x]++;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(check(v))
            {
                ans++;
            }
            mp[x]--;
            return;
        }
        
        solve(root->left,v);
        
        solve(root->right,v);
        
        mp[x]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        vector<int> v;
        
        solve(root,v);
        
        return ans;
    }
};