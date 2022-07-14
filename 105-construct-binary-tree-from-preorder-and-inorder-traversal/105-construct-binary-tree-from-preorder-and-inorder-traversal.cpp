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
    
    unordered_map<int,int> mp;
    
    TreeNode* solve(int preStart,int preEnd,vector<int>& pre,int inStart,int inEnd,vector<int>& in)
    {
        if(inStart>inEnd || preStart>preEnd)
        {
            return NULL;
        }
        
        int ele=pre[preStart];
        int idx=mp[ele];
        int nele=idx-inStart;
        
        TreeNode* root=new TreeNode(ele);
        
        root->left=solve(preStart+1,preStart+nele,pre,inStart,idx-1,in);
        root->right=solve(preStart+nele+1,preEnd,pre,idx+1,inEnd,in);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        int n=in.size();
        
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        
        return solve(0,n-1,pre,0,n-1,in);
    }
};