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
    
    bool check(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        
        if(p==NULL || q==NULL)
        {
            return 0;
        }
        
        if(p->val==q->val)
        {
            return check(p->left,q->left) && check(p->right,q->right);
        }
        
        return 0;
    }
    
    bool isSubtree(TreeNode* a, TreeNode* b) {
        
        if(a==NULL && b==NULL)
        {
            return 1;
        }
        
        if(a==NULL)
        {
            return 0;
        }
        
        if(a->val==b->val && check(a,b))
        {
            return 1;
        }
        
        return isSubtree(a->left,b) || isSubtree(a->right,b);
    }
};