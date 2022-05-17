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
            mp1.clear();
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                int i=p.second;
                
                mp1[i].push_back(r->val);
                
                if(r->left!=NULL)
                {
                    q.push({r->left,i-1});
                }
                if(r->right!=NULL)
                {
                    q.push({r->right,i+1});
                }
            }
            
             for(auto i:mp1)
            {
                vector<int> v=i.second;
                sort(v.begin(),v.end());
                for(auto j:v)
                mp[i.first].push_back(j);
            }
        }
        
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};

/*
Input
[3,1,4,0,2,2]
Output
[[0],[1],[2,2,3],[4]]
Expected
[[0],[1],[3,2,2],[4]]
*/