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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        queue<pair<TreeNode*,long>> q;
        q.push({root,1});
        
        long ans=0;
        
        while(!q.empty())
        {
            long first=INT_MAX,last=0;
            long mi=q.front().second;
            int k=q.size();
            
            for(int j=0;j<k;j++)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                long ind=p.second-mi;
                
                if(j==0)
                {
                    first=ind;
                }
                if(j==k-1)
                {
                    last=ind;
                }
                
                if(r->left!=NULL)
                {
                    q.push({r->left,(2*ind)+1});
                }
                if(r->right!=NULL)
                {
                     q.push({r->right,(2*ind)+2});
                }
            }
            
            ans=max(ans,last-first+1);
        }
        
        return ans;
    }
};