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
    
    
    
    TreeNode* lca(TreeNode* root,int a,int b)
    {
        if(root==NULL || root->val==a || root->val==b)
        {
            return root;
        }
        
        TreeNode* l=lca(root->left,a,b);
        TreeNode* r=lca(root->right,a,b);
        
        if(l==NULL)
        {
            return r;
        }
        
        if(r==NULL)
        {
            return l;
        }
        
        return root;
    }
    
    string lh="";
    string rh="";
    
    void solve(TreeNode* root,int x,string &s)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+='U';
        solve(root->left,x,s);
        s.pop_back();
        
        if(root->val==x)
        {
            lh=s;
        }
        
        s+='U';
        solve(root->right,x,s);
        s.pop_back();
        
    }
    
    void solve2(TreeNode* root,int x,string &s)
    {
        if(root==NULL)
        {
            return;
        }
        
        s+='L';
        solve2(root->left,x,s);
        s.pop_back();
        
        if(root->val==x)
        {
            rh=s;
        }
        
        s+='R';
        solve2(root->right,x,s);
        s.pop_back();
        
    }
    
    string getDirections(TreeNode* root, int a, int b) {
        
        TreeNode* node=lca(root,a,b);
        
        //cout<<node->val<<endl;
        
        string s="";
        
        solve(node,a,s);
        solve2(node,b,s);
        
        //cout<<lh<<" "<<rh<<endl;
        
        return lh+rh;
    }
};