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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
      
        vector<vector<int>> ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int k=q.size();
            
            vector<int> v;
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                v.push_back(p->val);
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }
            
            ans.push_back(v);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};