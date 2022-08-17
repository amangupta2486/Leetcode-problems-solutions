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
     
        map<int,vector<int>> mp;
        
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            int l=q.size();
            unordered_map<int,vector<int>> mp1;
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
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
                auto v=x.second;
                
                sort(v.begin(),v.end());
                
                for(auto j:v)
                mp[x.first].push_back(j);
            }
            
        }
        
        vector<vector<int>> ans;
            
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};