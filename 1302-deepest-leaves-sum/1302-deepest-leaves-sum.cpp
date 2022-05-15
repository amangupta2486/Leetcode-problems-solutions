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
    int deepestLeavesSum(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<int> v;
        int ans=0;
        
        while(!q.empty())
        {
            //v.clear();
            ans=0;
            int k=q.size();
            
            while(k>0)
            {
                auto p=q.front();
                q.pop();
                //cout<<p->val<<" ";
                
                //v.push_back(p->val);
                ans+=p->val;
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
                k--;
            }
        }
//         int ans=0;
        
//         for(auto i:v)
//         {
//             ans+=i;
//         }
        
        return ans;
    }
};