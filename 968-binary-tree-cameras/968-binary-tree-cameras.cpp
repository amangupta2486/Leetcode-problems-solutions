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
    
    int ans=0,ans2=0;
    // 2 camera in node
    // 1 covered
    // 0 uncovered
    
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 1;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        if(l==0 || r==0)
        {
            ans++;
            return 2;
        }
        
        return l==2 || r==2 ? 1 : 0;
    }
    
    int minCameraCover(TreeNode* root) {
        
        if(solve(root)==0)
        {
            ans++;
        }

        return ans;
    }
};
/*
[0,0,null,0,0]
[0,0,null,0,null,0,null,null,0]
[0,0,0,null,null,null,0]
[0,0,null,null,0,0,null,null,0,0]
*/