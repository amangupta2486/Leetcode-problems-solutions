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
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        TreeNode* tmp=root->left;
        root->left = root->right;
        root->right =tmp;
        
        solve(root->left);
        solve(root->right);
       
    }
    TreeNode* invertTree(TreeNode* root) {
        //solve(root);
        
        if(root==NULL)
        {
            return root;
        }
        queue<TreeNode*> s;
        
        s.push(root);
        
        while(!s.empty())
        {
            int k=s.size();
            
            while(k--)
            {    
                auto p=s.front();
                s.pop();

                TreeNode* tmp=p->left;
                p->left = p->right;
                p->right =tmp;

                if(p->left!=NULL)
                {
                    s.push(p->left);
                }
                if(p->right!=NULL)
                {
                    s.push(p->right);
                }
            }
        }
        return root;
    }
};