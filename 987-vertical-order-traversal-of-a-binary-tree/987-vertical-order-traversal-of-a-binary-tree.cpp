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
        
        map<int,vector<int>> mp;
        
        while(!q.empty())
        {
            int k=q.size();
            
            map<int,vector<int>> mp1;
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                int id=p.second;
                
                mp1[id].push_back(r->val);
                
                if(r->left!=NULL)
                {
                    q.push({r->left,id-1});
                }
                
                if(r->right!=NULL)
                {
                    q.push({r->right,id+1});
                }
                
            }
            
            for(auto x:mp1)
            {
                auto v = x.second;
                
                sort(v.begin(),v.end());
                
                for(auto i:v)
                {
                    mp[x.first].push_back(i);
                }
            }
        }
        
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        
        return ans;
    }
};