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
    
    bool solve(TreeNode* p, TreeNode* q)
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
            return solve(p->left,q->left) &&solve(p->right,q->right);
        }
        
        return 0;
    }
    bool isSubtree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        
        //if(p->val==q->val)
        if(solve(p,q))
        {
            return 1;
        }
        
        if(p!=NULL)
        return isSubtree(p->left,q) || isSubtree(p->right,q);
        
        return 0;
    }
};