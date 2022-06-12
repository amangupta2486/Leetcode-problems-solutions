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
        
        queue<pair<TreeNode*,long long>> q;
        
        q.push({root,0});
        long long first=0,last=0,ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            long long mi=q.front().second;
            //cout<<mi<<endl;
            for(int i=0;i<k;i++)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                long long idx=p.second-mi;
                //cout<<idx<<" ";
                if(i==0)
                {
                    first=idx;
                }
                if(i==k-1)
                {
                    last=idx;
                }
                
                if(r->left!=NULL)
                {
                    q.push({r->left,(2*idx)});
                }
                 if(r->right!=NULL)
                {
                    q.push({r->right,(2*idx)+1});
                }
            }
            
            ans=max(ans,last-first+1);
        }
        
        return ans;
    }
};