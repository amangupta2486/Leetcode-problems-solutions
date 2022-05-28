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
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                long i=p.second;
                first=min(first,p.second);
                last=max(last,p.second);
                
                if(r->left!=NULL)
                {
                    q.push({r->left,((2*i))-first});
                }
                if(r->right!=NULL)
                {
                     q.push({r->right,((2*i)+1)-first});
                }
            }
            
            ans=max(ans,last-first+1);
        }
        
        return ans;
    }
};