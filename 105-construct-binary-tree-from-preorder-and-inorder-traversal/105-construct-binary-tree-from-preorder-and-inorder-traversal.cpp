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
    map<int,int> mp;
    
    TreeNode* solve(vector<int>& pre, vector<int>& in,int prestart,int preend,int instart,int inend)
    {
        if(prestart>preend || instart>inend)
        {
            return NULL;
        }
        
        int data=pre[prestart];
        TreeNode* root= new TreeNode(data);
        int i=mp[data];
        int j=i-instart;
        root->left = solve(pre,in,prestart+1,prestart+j,instart,i-1);
        root->right= solve(pre,in,prestart+j+1,preend,i+1,inend);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=in.size();
        
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        
        return solve(pre,in,0,n-1,0,n-1);
    }
};