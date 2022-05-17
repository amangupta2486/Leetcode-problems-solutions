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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root==NULL)
        {
            return ans;   
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        int f=1;
        
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
            
            if(f==0)
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            else
            {
                ans.push_back(v);
            }
            f^=1;
            
        }
        
        return ans;
    }
};