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
    
    int ans=0;
    
    void solve(TreeNode* root,int s, int t)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(s==t)
            {
                ans=1;
            }    
            return;
        }
        
        
        solve(root->left,s,t);
        solve(root->right,s,t);
    }
    bool hasPathSum(TreeNode* root, int t) {
        
        if(root==NULL)
        {
            return 0;
        }
        
       // solve(root,0,t);
        queue<pair<TreeNode*,int>> q;
        q.push({root,root->val});
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto r=q.front();
                q.pop();
                
                auto p=r.first;
                int  s=r.second;
                
                //s+=root->val;
               // cout<<s<<" ";
                
                if(p->left==NULL && p->right==NULL)
                {
                    if(s==t)
                    {
                        return 1;
                    }
                }
                
                if(p->left!=NULL)
                {
                    q.push({p->left,s+p->left->val});
                }
                
                if(p->right!=NULL)
                {
                    q.push({p->right,s+p->right->val});
                }
            }
        }
        cout<<endl;
        return ans;
    }
};