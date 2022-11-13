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
    
    TreeNode* solve(int i,int j,vector<int>& a)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int m=(i+j)/2;
        
        TreeNode* root=new TreeNode(a[m]);
        
        root->left=solve(i,m-1,a);
        root->right=solve(m+1,j,a);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& a) {
        
        int n=a.size();
        
        return solve(0,n-1,a);
    }
};