/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* ans=NULL;
    
    void solve(TreeNode* original,TreeNode* cloned,TreeNode* t)
    {
        if(original==NULL)
        {
            return;
        }
        
        if(original==t)
        {
            ans=cloned;
        }
        
        solve(original->left,cloned->left,t);
        solve(original->right,cloned->right,t);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        solve(original,cloned,target);
        
        return ans;
    }
};