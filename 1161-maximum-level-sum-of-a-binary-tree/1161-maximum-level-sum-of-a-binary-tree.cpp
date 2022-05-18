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
    int maxLevelSum(TreeNode* root) {
        
        vector<int> v;
        
        queue<TreeNode*> q;
        
        q.push({root});
        
        while(!q.empty())
        {
            int k=q.size();
            int s=0;
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                s+=p->val;
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }
            v.push_back(s);
        }
        
        int ans=root->val,ind=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(ans<v[i])
            {
                ans=v[i];
                ind=i;
            }
        }
        
        return ind+1;
    }
};