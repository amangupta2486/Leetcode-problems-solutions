/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    unordered_map<TreeNode*,TreeNode*> mp;
    
    void solve(TreeNode* root,TreeNode* p)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->left,root);
        
        mp[root]=p;
        
        solve(root->right,root);
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        if(k==0)
        {
            return {target->val};    
        }
        
        solve(root,NULL);
        
        queue<pair<TreeNode*,int>> q;
        
        q.push({target,k});
        
        unordered_set<TreeNode*> vis;
        
       // vis.insert(root);
        
        vector<int> ans;
    
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                TreeNode* r=p.first;
                int d=p.second;
                
                //cout<<r->val<<" ";
                
                if(d==0)
                {
                    if(r!=target)
                    ans.push_back(r->val);
                    continue;
                }
                
                if(mp[r]!=NULL && vis.find(mp[r])==vis.end())
                {
                    vis.insert(mp[r]);
                    q.push({mp[r],d-1});
                }
                
                if(r->left!=NULL && vis.find(r->left)==vis.end())
                {
                    vis.insert(r->left);
                    q.push({r->left,d-1});
                }
                
                if(r->right!=NULL && vis.find(r->right)==vis.end())
                {
                    vis.insert(r->right);
                    q.push({r->right,d-1});
                }
            }
        }
        
        return ans;
    }
};