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
    vector<int> rightSideView(TreeNode* a) {

    vector<int> v;

    if(a==NULL)
    {
        return v;
    }

    queue<TreeNode*> q;
    q.push(a);

    vector<vector<int>> ans;
    while(!q.empty())
    {
        vector<int> b;
        int k=q.size();

        while(k--)
        {
            auto p=q.front();
            q.pop();

            b.push_back(p->val);

            if(p->left!=NULL)
            {
                q.push(p->left);
            }
            
             if(p->right!=NULL)
            {
                q.push(p->right);
            }
        }

        ans.push_back(b);
    }

    //reverse(ans.begin(),ans.end());

    for(auto i:ans)
    {
        v.push_back(i.back());
    }

    return v;
    
    }
};