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
    
    TreeNode*  solve(vector<int> &a,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int mid=(i+j)/2;
        
        TreeNode* root=new TreeNode(a[mid]);
        
        root->left= solve(a,i,mid-1);
        root->right=solve(a,mid+1,j);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& a) {
        
        int n=a.size();
        
        return solve(a,0,n-1);
    }
};