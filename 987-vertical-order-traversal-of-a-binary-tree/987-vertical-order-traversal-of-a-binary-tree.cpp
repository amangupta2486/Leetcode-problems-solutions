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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        map<int,vector<int>> mp;
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        while(!q.empty())
        {
            int k=q.size();
            map<int,vector<int>> mp1;
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                TreeNode* r=p.first;
                int idx=p.second;
                
                mp1[idx].push_back(r->val);
                
                if(r->left!=NULL)
                {
                    q.push({r->left,idx-1});
                }
                
                if(r->right!=NULL)
                {
                    q.push({r->right,idx+1});
                }
            }
            
            for(auto x:mp1)
            {
                auto p=x.second;
                
                sort(p.begin(),p.end());
                
                for(auto i:p)
                {
                    mp[x.first].push_back(i);
                }
            }
        }
        
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};