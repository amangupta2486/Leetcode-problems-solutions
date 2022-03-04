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
        
        queue<pair<TreeNode*,long long>> q;
        
        q.push({root,0});
        
        long long ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            auto mi= q.front().second;
            
            long long l=0,r=0;
            
            for(int j=0;j<k;j++)
            {
                auto p=q.front();
                q.pop();
                
                auto s=p.first;
                long long i=p.second-mi;
                
                if(j==0)
                {
                    l=i;
                }
                
                if(j==k-1)
                {
                    r=i;
                }
                
                if(s->left!=NULL)
                {
                    q.push({s->left,(2*i)+1});
                }
                if(s->right!=NULL)
                {
                    q.push({s->right,(2*i)+2});
                }
            }
            
            ans=max(ans,r-l+1);
        }
        
        return ans;
    }
};