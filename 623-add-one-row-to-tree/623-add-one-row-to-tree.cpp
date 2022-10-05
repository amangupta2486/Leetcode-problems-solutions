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
    
    void solve(TreeNode* root, int val, int d,int i)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left,val,d,i+1);
        
        solve(root->right,val,d,i+1);
        
        if(i==d-1)
        {
            TreeNode* p=new TreeNode(val);
            TreeNode* q=new TreeNode(val);
            
            TreeNode* l=root->left;
            TreeNode* r=root->right;
                        
            root->left=p;
            p->left=l;
            
            root->right=q;
            q->right=r;
        }
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1)
        {
            TreeNode* p=new TreeNode(val);

            p->left=root;

            return p;
        }
        
        
        solve(root,val,depth,1);
        
        return root;
    }
};