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
    
    int lheight(TreeNode* root)
    {
        int l=1;
        
        while(root)
        {
            root=root->left;
            l++;
        }
        
        return l;
    }
    
    int rheight(TreeNode* root)
    {
        int r=1;
        
        while(root)
        {
            root=root->right;
            r++;
        }
        
        return r;
    }
    
    int countNodes(TreeNode* root) {
     
        if(root==NULL)
        {
            return 0;
        }
        
        int l=lheight(root->left);
        int h=rheight(root->right);
        
        //cout<<l<<" "<<h<<endl;
        
        if(l==h)
        {
            return (1<<l)-1;
        }
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};