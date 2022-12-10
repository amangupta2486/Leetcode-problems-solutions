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

    long long ans=0,s=0;
    long long x=1e9+7;

    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }

        int l=solve(root->left);
        int r=solve(root->right);

        s+=root->val;

        root->val+=l+r;

        return root->val;
    }

    void find(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->left)
        {
            long long a=s - root->left->val;
            long long b=root->left->val;

            //cout<<a<<" "<<b<<endl;

            ans=max(ans,a*b);
        }

        if(root->right)
        {
            long long a=s - root->right->val;
            long long b=root->right->val;

            //cout<<a<<" "<<b<<endl;
            
            ans=max(ans,a*b);
        }

        find(root->left);
        find(root->right);
    }

    int maxProduct(TreeNode* root) {
        
        solve(root);
        find(root);

        return ans%x;
    }
};