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
    
    TreeNode* solve(vector<int>& a,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int mx=0,mi=0;
        
        for(int k=i;k<=j;k++)
        {
            if(mx<=a[k])
            {
                mx=a[k];
                mi=k;
            }
        }
        
        //cout<<mi<<" ";
        
        TreeNode* root=new TreeNode(a[mi]);
        
        root->left=solve(a,i,mi-1);
        root->right=solve(a,mi+1,j);
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& a) {
        
        int n=a.size();
        
        return solve(a,0,n-1);
    }
};