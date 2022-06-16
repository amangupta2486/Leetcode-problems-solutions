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
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<double> ans;
        
        while(!q.empty())
        {
            int k=q.size();
            double s=0;
            
            for(int i=0;i<k;i++)
            {
                auto p=q.front();
                q.pop();
                
                s+=(double)p->val;
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
                
            }
            s=(double)s/k;
            
            ans.push_back(s);
        }
        
        return ans;
    }
};