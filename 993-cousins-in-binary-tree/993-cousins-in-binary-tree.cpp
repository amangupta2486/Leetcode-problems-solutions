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
    
    TreeNode* pa;
    TreeNode* pb;
    
    int a=0,b=0;
    
    void solve(TreeNode* root,int x,int y,int s,TreeNode* prev)
    {
        if(root==NULL)
        {
            return ;
        }
        
        if(root->val==x)
        {
            pa=prev;
            a=s;
        }
        
        if(root->val==y)
        {
            pb=prev;
            b=s;
        }
        
        solve(root->left,x,y,s+1,root);
        solve(root->right,x,y,s+1,root);
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        solve(root,x,y,0,NULL);
        
        if(a==b && pa!=pb)
        {
            return 1;
        }
        
        return 0;
    }
};