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
        
        if(root==NULL)
        {
            return ans;
        }
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        map<int,vector<int>> mp1;
        
        while(!q.empty())
        {
            int k=q.size();
            map<int,vector<int>> mp;
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                TreeNode* r=p.first;
                int x=p.second;
                
                mp[x].push_back(r->val);
                
                if(r->left!=NULL)
                {
                    q.push({r->left,x-1});
                }
                if(r->right!=NULL)
                {
                    q.push({r->right,x+1});
                }
            }
            
            for(auto i:mp)
            {
                auto v=i.second;
                sort(v.begin(),v.end());
                for(auto j:v)
                mp1[i.first].push_back(j);
            }
        }
        
        for(auto i:mp1)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};