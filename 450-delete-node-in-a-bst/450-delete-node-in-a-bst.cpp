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
    
    void solve(TreeNode* root, int key)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->left!=NULL && root->left->val==key)
        {
            TreeNode* r=root->left;
            
            if(r->left==NULL)
            {
                root->left=r->right;
                return;
            }
            
            TreeNode* p=r->left;
            TreeNode* q=r->right;
            
            root->left=p;
            
            while(p->right!=NULL)
            {
                p=p->right;
            }
            
            p->right=q;
            
            /*
            [5,2,6,null,null,null,7]
            [5,4,6,2,null,null,7]
            */
        }
        
        if(root->right!=NULL && root->right->val==key)
        {
            TreeNode* r=root->right;
            
            if(r->right==NULL)
            {
                root->right=r->left;
                return;
            }
            
            TreeNode* p=r->right;
            TreeNode* q=r->left;
            
            root->right=p;
            
            while(p->left!=NULL)
            {
                p=p->left;
            }
            
            p->left=q;
        }
        
        solve(root->left,key);
        
        solve(root->right,key);
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)
        {
            return root;
        }
            
        if(root->val==key)
        {
            TreeNode* p=root->left;
            TreeNode* q=root->right;
            
            if(p==NULL)
            {
                return q;
            }
            
            if(q==NULL)
            {
                return p;
            }
            
            root=root->left;
            
            if(root!=NULL)
            {
                while(root->right!=NULL)
                {
                    root=root->right;
                }

                root->right=q;
            
            }
            
            return p;
        }
        
        solve(root,key);
        
        return root;
    }
};