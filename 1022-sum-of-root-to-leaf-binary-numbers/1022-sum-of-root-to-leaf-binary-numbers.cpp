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
    
    vector<string> ans;
    
    void solve(TreeNode* root,string s)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+=to_string(root->val);
                
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(s);
            return;
        }
        
        solve(root->left,s);
        solve(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        
        solve(root,"");
        int s=0;
        for(auto i:ans)
        {
            int n=i.size();
            int k=0;
            for(int j=n-1;j>=0;j--)
            {
                if(i[j]=='1')
                {
                    s+=pow(2,k);
                }
                k++;
            }
        }
        return s;
    }
};