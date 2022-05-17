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
        
        //solve(original,cloned,target);
        
        queue<vector<TreeNode*>> q;
        
        q.push({original,cloned});
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                auto x=p[0];
                auto y=p[1];
                
                if(x==target)
                {
                    return y;
                }
                
                if(x->left!=NULL)
                {
                    q.push({x->left,y->left});
                }
                if(y->right!=NULL)
                {
                    q.push({x->right,y->right});
                }
            }
        }
        return ans;
    }
};