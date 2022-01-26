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
    
    vector<int> ans;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
        
    }
    
//     TreeNode* solve(TreeNode* a,TreeNode* b)
//     {
//         if(a==NULL && b==NULL)
//         {
//             return NULL;
//         }
        
//         if(b==NULL)
//         {
//             return a;
//         }
        
//         if(a==NULL)
//         {
//             return b;
//         }
        
//         a+=b->val;
        
//         a->left = solve(a->left,b->left);
        
//         a->right=solve(a->right,b->right);
        
//         return a;
//     }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        //TreeNode* root = solve(root1,root2);
        
        inorder(root1);
        inorder(root2);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};