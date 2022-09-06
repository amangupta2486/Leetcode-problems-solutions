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
    
    int solve(TreeNode* root,TreeNode* p)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==0)
            {
                return 0;
            }
            
            return 1;
        }
        
        int l=solve(root->left,p);
        int r=solve(root->right,p);
        
        if(l==0)
        {
            root->left =NULL; 
        }
        
        if(r==0)
        {
            root->right=NULL;     
        }
        
        return l || r || root->val;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        solve(root,NULL);
        
        if(root!=NULL)
        {
            if(root->val==0 && root->left==NULL && root->right==NULL)
            {
                return NULL;
            }
        }
        
        return root;
    }
};