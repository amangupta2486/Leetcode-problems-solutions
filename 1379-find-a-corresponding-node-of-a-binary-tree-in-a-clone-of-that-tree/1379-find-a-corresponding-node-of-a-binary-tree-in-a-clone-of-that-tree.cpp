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


    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        stack<TreeNode*> p,q;
        auto x=original,y=cloned;
        
        while(!p.empty() || x!=NULL)
        {
            while(x!=NULL)
            {

                p.push(x);
                q.push(y);
                x=x->left;
                y=y->left;

            }
                x=p.top();
                p.pop();
            
                y=q.top();
                q.pop();
            
                if(x==target)
                {
                    return y;
                }
                
                if(x!=NULL)
                {
                    x=x->right;
                    y=y->right;
                }
            
        }
        return x;
    }
};